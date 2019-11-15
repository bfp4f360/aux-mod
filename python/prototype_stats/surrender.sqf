make_me_surrender = {
    params["_unit"];
    [_unit, true] call ace_captives_fnc_setSurrendered;

};

wake_me_up = {
    params["_unit"];

    _unit addAction ["Bill Cosby", {
        params ["_target", "_caller", "_actionId", "_arguments"];
        private _conscious = (_target getVariable ["ACE_isUnconscious", false]);

		[_target, !_conscious, 10e10, true] call ace_medical_fnc_setUnconscious;
        [_target, true] call ace_captives_fnc_setSurrendered;
    }];
};


{
    [_x, "init", {
        _this call make_me_surrender;
        _this call wake_me_up;
    },
    true, [], true
    ] call CBA_fnc_addClassEventHandler;

} foreach ["SWOP_CIS_droid","SWOP_CIS_superdroid_B2","RD501_opfor_unit_magna_guard_blackop","RD501_opfor_unit_IG_88"];
