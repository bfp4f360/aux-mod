
params["_curr_energy","_new_energy","_total_energy"];
_old_ratio=_curr_energy/_total_energy;
_new_ratio=_new_energy/_total_energy;

_result=false;
_thres=0;
_threshold_list=[.125,.25,.375,.5,.625,.75,.875,1];
_thres_color="#FFFFFF";
_threshold_color_list=["#FF0000","#FF4500","#FF8500","#FFA500","#fff200","#aaff00","#55ff00","#00FFFF"];
{
	if(_old_ratio<_x && _new_ratio>=_x) then {
			_result=true;
			_thres=_x;
			_thres_color= _threshold_color_list select _forEachIndex;
		};
}foreach _threshold_list;

// if(_old_ratio<.5 && _new_ratio>=.5) then {_result=true};
// if(_old_ratio<.75 && _new_ratio>=.75) then {_result=true};
// if(_old_ratio<1 && _new_ratio>=1) then {_result=true};

if(!_result) exitwith {};
[format["Energy: <t color='%5'>%1</t>/%2" +"<br />"+ "Percent: <t color='%5'>%3%4</t>",_new_energy,_total_energy,_thres*100,"%",_thres_color], ""] call ace_common_fnc_displayTextPicture;

