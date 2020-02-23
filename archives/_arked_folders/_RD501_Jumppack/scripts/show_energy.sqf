
params["_curr_energy","_total_energy"];

if(_total_energy<=0) exitWith {};
if(_curr_energy<0) exitWith {};

_energy_ratio=_curr_energy/_total_energy;



// _threshold_list=[.125,.25,.375,.5,.625,.75,.875,1];
// _thres_color="#FFFFFF";
// _threshold_color_list=["#FF0000","#FF4500","#FF8500","#FFA500","#fff200","#aaff00","#55ff00","#00FFFF"];
// reverse _threshold_list;

// {
// 	if(_energy_ratio<=_x) then{
// 		_thres_color= _threshold_color_list select _forEachIndex;
// 	}
// }foreach _threshold_list;
_thres_color="#800080";





[format["Energy Left: <t color='%5'>%1</t>/%2" +"<br />"+ "Percent: <t color='%5'>%3%4</t>",_curr_energy,_total_energy,_energy_ratio*100,"%",_thres_color], ""] call ace_common_fnc_displayTextPicture;

