    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 14;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (konn1m5pjf)
        ;%
            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% konn1m5pjf.PIDController_D
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% konn1m5pjf.LongitudinalDriverModel_GearInit
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 1;

                    ;% konn1m5pjf.PIDController_I
                    section.data(3).logicalSrcIdx = 10;
                    section.data(3).dtTransOffset = 2;

                    ;% konn1m5pjf.SignalHold_IC
                    section.data(4).logicalSrcIdx = 11;
                    section.data(4).dtTransOffset = 3;

                    ;% konn1m5pjf.SignalHold_IC_k5etbcnmrh
                    section.data(5).logicalSrcIdx = 12;
                    section.data(5).dtTransOffset = 4;

                    ;% konn1m5pjf.PIDController_InitialConditionForFilter
                    section.data(6).logicalSrcIdx = 13;
                    section.data(6).dtTransOffset = 5;

                    ;% konn1m5pjf.PIDController_InitialConditionForIntegrator
                    section.data(7).logicalSrcIdx = 14;
                    section.data(7).dtTransOffset = 6;

                    ;% konn1m5pjf.PIDController_Kb
                    section.data(8).logicalSrcIdx = 15;
                    section.data(8).dtTransOffset = 7;

                    ;% konn1m5pjf.LongitudinalDriverModel_Kpt
                    section.data(9).logicalSrcIdx = 16;
                    section.data(9).dtTransOffset = 8;

                    ;% konn1m5pjf.LongitudinalDriverModel_L
                    section.data(10).logicalSrcIdx = 17;
                    section.data(10).dtTransOffset = 9;

                    ;% konn1m5pjf.PIDController_LowerSaturationLimit
                    section.data(11).logicalSrcIdx = 18;
                    section.data(11).dtTransOffset = 10;

                    ;% konn1m5pjf.PIDController_N
                    section.data(12).logicalSrcIdx = 19;
                    section.data(12).dtTransOffset = 11;

                    ;% konn1m5pjf.PIDController_P
                    section.data(13).logicalSrcIdx = 20;
                    section.data(13).dtTransOffset = 12;

                    ;% konn1m5pjf.PIDController_UpperSaturationLimit
                    section.data(14).logicalSrcIdx = 21;
                    section.data(14).dtTransOffset = 13;

                    ;% konn1m5pjf.LongitudinalDriverModel_aR
                    section.data(15).logicalSrcIdx = 22;
                    section.data(15).dtTransOffset = 14;

                    ;% konn1m5pjf.LongitudinalDriverModel_bR
                    section.data(16).logicalSrcIdx = 23;
                    section.data(16).dtTransOffset = 15;

                    ;% konn1m5pjf.LongitudinalDriverModel_cR
                    section.data(17).logicalSrcIdx = 24;
                    section.data(17).dtTransOffset = 16;

                    ;% konn1m5pjf.LongitudinalDriverModel_g
                    section.data(18).logicalSrcIdx = 25;
                    section.data(18).dtTransOffset = 17;

                    ;% konn1m5pjf.LongitudinalDriverModel_m
                    section.data(19).logicalSrcIdx = 26;
                    section.data(19).dtTransOffset = 18;

                    ;% konn1m5pjf.LongitudinalDriverModel_tShift
                    section.data(20).logicalSrcIdx = 27;
                    section.data(20).dtTransOffset = 19;

                    ;% konn1m5pjf.LongitudinalDriverModel_tau
                    section.data(21).logicalSrcIdx = 28;
                    section.data(21).dtTransOffset = 20;

                    ;% konn1m5pjf.div0protectpoly_thresh
                    section.data(22).logicalSrcIdx = 29;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% konn1m5pjf.EnumeratedConstant_Value
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 65;
            section.data(65)  = dumData; %prealloc

                    ;% konn1m5pjf.u1_UpperSat
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

                    ;% konn1m5pjf.u1_LowerSat
                    section.data(2).logicalSrcIdx = 32;
                    section.data(2).dtTransOffset = 1;

                    ;% konn1m5pjf.u0_UpperSat
                    section.data(3).logicalSrcIdx = 33;
                    section.data(3).dtTransOffset = 2;

                    ;% konn1m5pjf.u0_LowerSat
                    section.data(4).logicalSrcIdx = 34;
                    section.data(4).dtTransOffset = 3;

                    ;% konn1m5pjf.Switch1_Threshold
                    section.data(5).logicalSrcIdx = 35;
                    section.data(5).dtTransOffset = 4;

                    ;% konn1m5pjf.Constant_Value
                    section.data(6).logicalSrcIdx = 36;
                    section.data(6).dtTransOffset = 5;

                    ;% konn1m5pjf.Constant_Value_nhp3htkj21
                    section.data(7).logicalSrcIdx = 37;
                    section.data(7).dtTransOffset = 6;

                    ;% konn1m5pjf.MotorCouplingDynamics_A
                    section.data(8).logicalSrcIdx = 38;
                    section.data(8).dtTransOffset = 7;

                    ;% konn1m5pjf.MotorCouplingDynamics_C
                    section.data(9).logicalSrcIdx = 39;
                    section.data(9).dtTransOffset = 8;

                    ;% konn1m5pjf.FirstOrderHold_IniOut
                    section.data(10).logicalSrcIdx = 40;
                    section.data(10).dtTransOffset = 9;

                    ;% konn1m5pjf.FirstOrderHold_ErrTol
                    section.data(11).logicalSrcIdx = 41;
                    section.data(11).dtTransOffset = 10;

                    ;% konn1m5pjf.FirstOrderHold_IniOut_jie5nbhxr2
                    section.data(12).logicalSrcIdx = 42;
                    section.data(12).dtTransOffset = 11;

                    ;% konn1m5pjf.FirstOrderHold_ErrTol_llzlt0txj1
                    section.data(13).logicalSrcIdx = 43;
                    section.data(13).dtTransOffset = 12;

                    ;% konn1m5pjf.BatteryDischargeDynamics_A
                    section.data(14).logicalSrcIdx = 44;
                    section.data(14).dtTransOffset = 13;

                    ;% konn1m5pjf.BatteryDischargeDynamics_C
                    section.data(15).logicalSrcIdx = 45;
                    section.data(15).dtTransOffset = 14;

                    ;% konn1m5pjf.Airvelocityms_Bias
                    section.data(16).logicalSrcIdx = 46;
                    section.data(16).dtTransOffset = 15;

                    ;% konn1m5pjf.Pumpresponsedelay_A
                    section.data(17).logicalSrcIdx = 47;
                    section.data(17).dtTransOffset = 16;

                    ;% konn1m5pjf.Pumpresponsedelay_C
                    section.data(18).logicalSrcIdx = 48;
                    section.data(18).dtTransOffset = 17;

                    ;% konn1m5pjf.StateSpace_A_pr
                    section.data(19).logicalSrcIdx = 49;
                    section.data(19).dtTransOffset = 18;

                    ;% konn1m5pjf.StateSpace_B_pr
                    section.data(20).logicalSrcIdx = 50;
                    section.data(20).dtTransOffset = 19;

                    ;% konn1m5pjf.StateSpace_C_pr
                    section.data(21).logicalSrcIdx = 51;
                    section.data(21).dtTransOffset = 20;

                    ;% konn1m5pjf.StateSpace_InitialCondition
                    section.data(22).logicalSrcIdx = 52;
                    section.data(22).dtTransOffset = 21;

                    ;% konn1m5pjf.Integrator1_IC
                    section.data(23).logicalSrcIdx = 53;
                    section.data(23).dtTransOffset = 22;

                    ;% konn1m5pjf.Saturation_UpperSat
                    section.data(24).logicalSrcIdx = 54;
                    section.data(24).dtTransOffset = 23;

                    ;% konn1m5pjf.Saturation_LowerSat
                    section.data(25).logicalSrcIdx = 55;
                    section.data(25).dtTransOffset = 24;

                    ;% konn1m5pjf.Saturation_UpperSat_n5cfzewtp3
                    section.data(26).logicalSrcIdx = 56;
                    section.data(26).dtTransOffset = 25;

                    ;% konn1m5pjf.Saturation_LowerSat_jdvecoiqp4
                    section.data(27).logicalSrcIdx = 57;
                    section.data(27).dtTransOffset = 26;

                    ;% konn1m5pjf.Switch_Threshold
                    section.data(28).logicalSrcIdx = 58;
                    section.data(28).dtTransOffset = 27;

                    ;% konn1m5pjf.uDLookupTable_tableData
                    section.data(29).logicalSrcIdx = 59;
                    section.data(29).dtTransOffset = 28;

                    ;% konn1m5pjf.uDLookupTable_bp01Data
                    section.data(30).logicalSrcIdx = 60;
                    section.data(30).dtTransOffset = 1829;

                    ;% konn1m5pjf.kW_Gain
                    section.data(31).logicalSrcIdx = 61;
                    section.data(31).dtTransOffset = 3630;

                    ;% konn1m5pjf.Gain_Gain
                    section.data(32).logicalSrcIdx = 62;
                    section.data(32).dtTransOffset = 3631;

                    ;% konn1m5pjf.Efficiency_Gain
                    section.data(33).logicalSrcIdx = 63;
                    section.data(33).dtTransOffset = 3632;

                    ;% konn1m5pjf.Gain1_Gain
                    section.data(34).logicalSrcIdx = 64;
                    section.data(34).dtTransOffset = 3633;

                    ;% konn1m5pjf.HitCrossing_Offset
                    section.data(35).logicalSrcIdx = 65;
                    section.data(35).dtTransOffset = 3634;

                    ;% konn1m5pjf.Integrator2_IC
                    section.data(36).logicalSrcIdx = 66;
                    section.data(36).dtTransOffset = 3635;

                    ;% konn1m5pjf.UnitDelay_InitialCondition
                    section.data(37).logicalSrcIdx = 67;
                    section.data(37).dtTransOffset = 3636;

                    ;% konn1m5pjf.Relay_OnVal
                    section.data(38).logicalSrcIdx = 68;
                    section.data(38).dtTransOffset = 3638;

                    ;% konn1m5pjf.Relay_OffVal
                    section.data(39).logicalSrcIdx = 69;
                    section.data(39).dtTransOffset = 3639;

                    ;% konn1m5pjf.Relay_YOn
                    section.data(40).logicalSrcIdx = 70;
                    section.data(40).dtTransOffset = 3640;

                    ;% konn1m5pjf.Relay_YOff
                    section.data(41).logicalSrcIdx = 71;
                    section.data(41).dtTransOffset = 3641;

                    ;% konn1m5pjf.repeat_Value
                    section.data(42).logicalSrcIdx = 72;
                    section.data(42).dtTransOffset = 3642;

                    ;% konn1m5pjf.tFinal_Value
                    section.data(43).logicalSrcIdx = 73;
                    section.data(43).dtTransOffset = 3643;

                    ;% konn1m5pjf.Constant2_Value
                    section.data(44).logicalSrcIdx = 74;
                    section.data(44).dtTransOffset = 3644;

                    ;% konn1m5pjf.Constant3_Value
                    section.data(45).logicalSrcIdx = 75;
                    section.data(45).dtTransOffset = 3645;

                    ;% konn1m5pjf.Constant_Value_mg0ii2c5jx
                    section.data(46).logicalSrcIdx = 76;
                    section.data(46).dtTransOffset = 3646;

                    ;% konn1m5pjf.Constant_Value_lfd1si2n0l
                    section.data(47).logicalSrcIdx = 77;
                    section.data(47).dtTransOffset = 3647;

                    ;% konn1m5pjf.Constant_Value_fb5mg350bv
                    section.data(48).logicalSrcIdx = 78;
                    section.data(48).dtTransOffset = 3648;

                    ;% konn1m5pjf.Constant1_Value
                    section.data(49).logicalSrcIdx = 79;
                    section.data(49).dtTransOffset = 3649;

                    ;% konn1m5pjf.AccessoryLoadW_Value
                    section.data(50).logicalSrcIdx = 80;
                    section.data(50).dtTransOffset = 3650;

                    ;% konn1m5pjf.Constant_Value_nys5l042yz
                    section.data(51).logicalSrcIdx = 81;
                    section.data(51).dtTransOffset = 3651;

                    ;% konn1m5pjf.Constant_Value_h2wdon5quy
                    section.data(52).logicalSrcIdx = 82;
                    section.data(52).dtTransOffset = 3652;

                    ;% konn1m5pjf.Constant_Value_gqtbi3ry5p
                    section.data(53).logicalSrcIdx = 83;
                    section.data(53).dtTransOffset = 3653;

                    ;% konn1m5pjf.Airdensitykgm3_Value
                    section.data(54).logicalSrcIdx = 84;
                    section.data(54).dtTransOffset = 3654;

                    ;% konn1m5pjf.RTP_87B9D3CA_T_Value
                    section.data(55).logicalSrcIdx = 85;
                    section.data(55).dtTransOffset = 3655;

                    ;% konn1m5pjf.RTP_6F7C700D_T_Value
                    section.data(56).logicalSrcIdx = 86;
                    section.data(56).dtTransOffset = 3656;

                    ;% konn1m5pjf.RTP_8D439205_T_Value
                    section.data(57).logicalSrcIdx = 87;
                    section.data(57).dtTransOffset = 3657;

                    ;% konn1m5pjf.RTP_28B86618_T_Value
                    section.data(58).logicalSrcIdx = 88;
                    section.data(58).dtTransOffset = 3658;

                    ;% konn1m5pjf.Constant2_Value_mma10cnxvb
                    section.data(59).logicalSrcIdx = 89;
                    section.data(59).dtTransOffset = 3659;

                    ;% konn1m5pjf.Constant3_Value_ikmr2cncbv
                    section.data(60).logicalSrcIdx = 90;
                    section.data(60).dtTransOffset = 3660;

                    ;% konn1m5pjf.Constant_Value_cxscovwunu
                    section.data(61).logicalSrcIdx = 91;
                    section.data(61).dtTransOffset = 3661;

                    ;% konn1m5pjf.Constant1_Value_cbg3kt12vf
                    section.data(62).logicalSrcIdx = 92;
                    section.data(62).dtTransOffset = 3662;

                    ;% konn1m5pjf.RTP_7CC9AFD0_level_Value
                    section.data(63).logicalSrcIdx = 93;
                    section.data(63).dtTransOffset = 3663;

                    ;% konn1m5pjf.RTP_7CC9AFD0_p_gas_Value
                    section.data(64).logicalSrcIdx = 94;
                    section.data(64).dtTransOffset = 3664;

                    ;% konn1m5pjf.RTP_7CC9AFD0_volume_liquid_Value
                    section.data(65).logicalSrcIdx = 95;
                    section.data(65).dtTransOffset = 3665;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% konn1m5pjf.convert2percent_Gain
                    section.data(1).logicalSrcIdx = 96;
                    section.data(1).dtTransOffset = 0;

                    ;% konn1m5pjf.Gain_Gain_dztmjyp2yi
                    section.data(2).logicalSrcIdx = 97;
                    section.data(2).dtTransOffset = 1;

                    ;% konn1m5pjf.Gain2_Gain
                    section.data(3).logicalSrcIdx = 98;
                    section.data(3).dtTransOffset = 97;

                    ;% konn1m5pjf.Gain1_Gain_kogwmhjid4
                    section.data(4).logicalSrcIdx = 99;
                    section.data(4).dtTransOffset = 98;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% konn1m5pjf.StateSpace_A_ir
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

                    ;% konn1m5pjf.StateSpace_A_jc
                    section.data(2).logicalSrcIdx = 101;
                    section.data(2).dtTransOffset = 1;

                    ;% konn1m5pjf.StateSpace_B_ir
                    section.data(3).logicalSrcIdx = 102;
                    section.data(3).dtTransOffset = 3;

                    ;% konn1m5pjf.StateSpace_B_jc
                    section.data(4).logicalSrcIdx = 103;
                    section.data(4).dtTransOffset = 4;

                    ;% konn1m5pjf.StateSpace_C_ir
                    section.data(5).logicalSrcIdx = 104;
                    section.data(5).dtTransOffset = 6;

                    ;% konn1m5pjf.StateSpace_C_jc
                    section.data(6).logicalSrcIdx = 105;
                    section.data(6).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% konn1m5pjf.Gain1_Gain_mjnwmk25rl
                    section.data(1).logicalSrcIdx = 106;
                    section.data(1).dtTransOffset = 0;

                    ;% konn1m5pjf.Gain2_Gain_nxczdnguyh
                    section.data(2).logicalSrcIdx = 107;
                    section.data(2).dtTransOffset = 1;

                    ;% konn1m5pjf.Gain_Gain_gsslgakjt4
                    section.data(3).logicalSrcIdx = 108;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%

                        ;% radiator
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 0;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(7) = section;
                        clear section


                        ;% pump
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 1;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(8) = section;
                        clear section


                        ;% T_env
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 2;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(9) = section;
                        clear section


                        ;% T_init
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 3;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(10) = section;
                        clear section


                        ;% T_set
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 4;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(11) = section;
                        clear section


                        ;% _BattSocInit2f2BMS_Software_DD_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 5;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(12) = section;
                        clear section


                        ;% enable_regen
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 6;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(13) = section;
                        clear section


                        ;% bat_soc_init
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 7;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(14) = section;
                        clear section



        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (cuhiq2he3xv)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cuhiq2he3xv.fgglakce4f
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cuhiq2he3xv.jan2ijhoyt
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 93;
            section.data(93)  = dumData; %prealloc

                    ;% cuhiq2he3xv.bht55s5qq3
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% cuhiq2he3xv.lz5vtehujl
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% cuhiq2he3xv.lrkperxqkh
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% cuhiq2he3xv.f32ubspqi4
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% cuhiq2he3xv.go1fcnlopp
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

                    ;% cuhiq2he3xv.dsdqzbwj3v
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5;

                    ;% cuhiq2he3xv.aa3fdhivvr
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 6;

                    ;% cuhiq2he3xv.ed5zbrqgc5
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 7;

                    ;% cuhiq2he3xv.btgdxjpot5
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 8;

                    ;% cuhiq2he3xv.pjihd5zicd
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 9;

                    ;% cuhiq2he3xv.a5qnq1dc0o
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 10;

                    ;% cuhiq2he3xv.brrexts5jl
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 11;

                    ;% cuhiq2he3xv.olcjbaurbk
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 12;

                    ;% cuhiq2he3xv.g1j2t5ryrl
                    section.data(14).logicalSrcIdx = 15;
                    section.data(14).dtTransOffset = 13;

                    ;% cuhiq2he3xv.i303hxmk4s
                    section.data(15).logicalSrcIdx = 16;
                    section.data(15).dtTransOffset = 14;

                    ;% cuhiq2he3xv.f3xfryzo45
                    section.data(16).logicalSrcIdx = 17;
                    section.data(16).dtTransOffset = 15;

                    ;% cuhiq2he3xv.l2r3hwo42w
                    section.data(17).logicalSrcIdx = 18;
                    section.data(17).dtTransOffset = 16;

                    ;% cuhiq2he3xv.aam4cx4xp2
                    section.data(18).logicalSrcIdx = 19;
                    section.data(18).dtTransOffset = 17;

                    ;% cuhiq2he3xv.lrzxrumeie
                    section.data(19).logicalSrcIdx = 20;
                    section.data(19).dtTransOffset = 18;

                    ;% cuhiq2he3xv.biin5otx1a
                    section.data(20).logicalSrcIdx = 21;
                    section.data(20).dtTransOffset = 19;

                    ;% cuhiq2he3xv.el3bc3rvwv
                    section.data(21).logicalSrcIdx = 22;
                    section.data(21).dtTransOffset = 20;

                    ;% cuhiq2he3xv.hm1fmdpdgy
                    section.data(22).logicalSrcIdx = 23;
                    section.data(22).dtTransOffset = 24;

                    ;% cuhiq2he3xv.j3ew0k2ceg
                    section.data(23).logicalSrcIdx = 24;
                    section.data(23).dtTransOffset = 28;

                    ;% cuhiq2he3xv.omqn5wlmzw
                    section.data(24).logicalSrcIdx = 25;
                    section.data(24).dtTransOffset = 29;

                    ;% cuhiq2he3xv.g5t5qx3zcf
                    section.data(25).logicalSrcIdx = 26;
                    section.data(25).dtTransOffset = 33;

                    ;% cuhiq2he3xv.d4gyom2cqd
                    section.data(26).logicalSrcIdx = 27;
                    section.data(26).dtTransOffset = 34;

                    ;% cuhiq2he3xv.icvg51iljz
                    section.data(27).logicalSrcIdx = 28;
                    section.data(27).dtTransOffset = 35;

                    ;% cuhiq2he3xv.kodvah5jo3
                    section.data(28).logicalSrcIdx = 29;
                    section.data(28).dtTransOffset = 36;

                    ;% cuhiq2he3xv.lx1jkj3hhs
                    section.data(29).logicalSrcIdx = 30;
                    section.data(29).dtTransOffset = 37;

                    ;% cuhiq2he3xv.juyzoqqgba
                    section.data(30).logicalSrcIdx = 31;
                    section.data(30).dtTransOffset = 38;

                    ;% cuhiq2he3xv.incncr24ln
                    section.data(31).logicalSrcIdx = 32;
                    section.data(31).dtTransOffset = 39;

                    ;% cuhiq2he3xv.gavoqkfufz
                    section.data(32).logicalSrcIdx = 33;
                    section.data(32).dtTransOffset = 40;

                    ;% cuhiq2he3xv.dnav505y5o
                    section.data(33).logicalSrcIdx = 34;
                    section.data(33).dtTransOffset = 41;

                    ;% cuhiq2he3xv.loitizpkx4
                    section.data(34).logicalSrcIdx = 35;
                    section.data(34).dtTransOffset = 42;

                    ;% cuhiq2he3xv.pf3kdhnsui
                    section.data(35).logicalSrcIdx = 36;
                    section.data(35).dtTransOffset = 43;

                    ;% cuhiq2he3xv.j4oygusifp
                    section.data(36).logicalSrcIdx = 37;
                    section.data(36).dtTransOffset = 44;

                    ;% cuhiq2he3xv.kktsse5wr3
                    section.data(37).logicalSrcIdx = 38;
                    section.data(37).dtTransOffset = 48;

                    ;% cuhiq2he3xv.pvxotluv5b
                    section.data(38).logicalSrcIdx = 39;
                    section.data(38).dtTransOffset = 49;

                    ;% cuhiq2he3xv.enqmayw5zb
                    section.data(39).logicalSrcIdx = 40;
                    section.data(39).dtTransOffset = 632;

                    ;% cuhiq2he3xv.bglj00uwmx
                    section.data(40).logicalSrcIdx = 41;
                    section.data(40).dtTransOffset = 639;

                    ;% cuhiq2he3xv.mq2rmflx5a
                    section.data(41).logicalSrcIdx = 42;
                    section.data(41).dtTransOffset = 640;

                    ;% cuhiq2he3xv.bcp2j24ktn
                    section.data(42).logicalSrcIdx = 43;
                    section.data(42).dtTransOffset = 641;

                    ;% cuhiq2he3xv.ghjwcqfy1n
                    section.data(43).logicalSrcIdx = 44;
                    section.data(43).dtTransOffset = 642;

                    ;% cuhiq2he3xv.mvfxkga0xl
                    section.data(44).logicalSrcIdx = 45;
                    section.data(44).dtTransOffset = 643;

                    ;% cuhiq2he3xv.nwplhjp5pc
                    section.data(45).logicalSrcIdx = 46;
                    section.data(45).dtTransOffset = 644;

                    ;% cuhiq2he3xv.hxtcmjvpb2
                    section.data(46).logicalSrcIdx = 47;
                    section.data(46).dtTransOffset = 645;

                    ;% cuhiq2he3xv.jmv50argl1
                    section.data(47).logicalSrcIdx = 48;
                    section.data(47).dtTransOffset = 646;

                    ;% cuhiq2he3xv.lwwxzl5qzf
                    section.data(48).logicalSrcIdx = 49;
                    section.data(48).dtTransOffset = 647;

                    ;% cuhiq2he3xv.mfbcndbdnw
                    section.data(49).logicalSrcIdx = 50;
                    section.data(49).dtTransOffset = 648;

                    ;% cuhiq2he3xv.eg4mfruiee
                    section.data(50).logicalSrcIdx = 51;
                    section.data(50).dtTransOffset = 649;

                    ;% cuhiq2he3xv.dcpucpuzjn
                    section.data(51).logicalSrcIdx = 52;
                    section.data(51).dtTransOffset = 650;

                    ;% cuhiq2he3xv.eqgmmqi3cf
                    section.data(52).logicalSrcIdx = 53;
                    section.data(52).dtTransOffset = 651;

                    ;% cuhiq2he3xv.l3rmegtqm5
                    section.data(53).logicalSrcIdx = 54;
                    section.data(53).dtTransOffset = 652;

                    ;% cuhiq2he3xv.n1ivhteclj
                    section.data(54).logicalSrcIdx = 55;
                    section.data(54).dtTransOffset = 653;

                    ;% cuhiq2he3xv.kmsp0cd1e1
                    section.data(55).logicalSrcIdx = 56;
                    section.data(55).dtTransOffset = 654;

                    ;% cuhiq2he3xv.fvfcqphwub
                    section.data(56).logicalSrcIdx = 57;
                    section.data(56).dtTransOffset = 655;

                    ;% cuhiq2he3xv.a54tevlqes
                    section.data(57).logicalSrcIdx = 58;
                    section.data(57).dtTransOffset = 656;

                    ;% cuhiq2he3xv.cwygjkza2r
                    section.data(58).logicalSrcIdx = 59;
                    section.data(58).dtTransOffset = 657;

                    ;% cuhiq2he3xv.ab4upgrnrw
                    section.data(59).logicalSrcIdx = 60;
                    section.data(59).dtTransOffset = 658;

                    ;% cuhiq2he3xv.nrgoj0estv
                    section.data(60).logicalSrcIdx = 61;
                    section.data(60).dtTransOffset = 660;

                    ;% cuhiq2he3xv.ij3l3krian
                    section.data(61).logicalSrcIdx = 62;
                    section.data(61).dtTransOffset = 661;

                    ;% cuhiq2he3xv.mjgpn01dl2
                    section.data(62).logicalSrcIdx = 63;
                    section.data(62).dtTransOffset = 662;

                    ;% cuhiq2he3xv.lg320qgezp
                    section.data(63).logicalSrcIdx = 64;
                    section.data(63).dtTransOffset = 663;

                    ;% cuhiq2he3xv.elrvsc3nih
                    section.data(64).logicalSrcIdx = 65;
                    section.data(64).dtTransOffset = 664;

                    ;% cuhiq2he3xv.pam35l1pg2
                    section.data(65).logicalSrcIdx = 66;
                    section.data(65).dtTransOffset = 665;

                    ;% cuhiq2he3xv.oigt4h5oa0
                    section.data(66).logicalSrcIdx = 67;
                    section.data(66).dtTransOffset = 666;

                    ;% cuhiq2he3xv.eaez13ma04
                    section.data(67).logicalSrcIdx = 68;
                    section.data(67).dtTransOffset = 667;

                    ;% cuhiq2he3xv.bkfce3mmg3
                    section.data(68).logicalSrcIdx = 69;
                    section.data(68).dtTransOffset = 668;

                    ;% cuhiq2he3xv.iumj4ipipu
                    section.data(69).logicalSrcIdx = 70;
                    section.data(69).dtTransOffset = 669;

                    ;% cuhiq2he3xv.ceif11edac
                    section.data(70).logicalSrcIdx = 71;
                    section.data(70).dtTransOffset = 670;

                    ;% cuhiq2he3xv.b0xsyyulsa
                    section.data(71).logicalSrcIdx = 72;
                    section.data(71).dtTransOffset = 671;

                    ;% cuhiq2he3xv.jcja03y2ta
                    section.data(72).logicalSrcIdx = 73;
                    section.data(72).dtTransOffset = 672;

                    ;% cuhiq2he3xv.eyxsiaqd30
                    section.data(73).logicalSrcIdx = 74;
                    section.data(73).dtTransOffset = 673;

                    ;% cuhiq2he3xv.klgwp0bl1e
                    section.data(74).logicalSrcIdx = 75;
                    section.data(74).dtTransOffset = 674;

                    ;% cuhiq2he3xv.hyeok2w0lk
                    section.data(75).logicalSrcIdx = 76;
                    section.data(75).dtTransOffset = 675;

                    ;% cuhiq2he3xv.as3zb4xmb3
                    section.data(76).logicalSrcIdx = 77;
                    section.data(76).dtTransOffset = 676;

                    ;% cuhiq2he3xv.nxipfqo4ge
                    section.data(77).logicalSrcIdx = 78;
                    section.data(77).dtTransOffset = 677;

                    ;% cuhiq2he3xv.bgyxx3obeb
                    section.data(78).logicalSrcIdx = 79;
                    section.data(78).dtTransOffset = 678;

                    ;% cuhiq2he3xv.mapbxuiz5v
                    section.data(79).logicalSrcIdx = 80;
                    section.data(79).dtTransOffset = 679;

                    ;% cuhiq2he3xv.kyoewhwiba
                    section.data(80).logicalSrcIdx = 81;
                    section.data(80).dtTransOffset = 680;

                    ;% cuhiq2he3xv.kj51ocjbc3
                    section.data(81).logicalSrcIdx = 82;
                    section.data(81).dtTransOffset = 682;

                    ;% cuhiq2he3xv.k25qje3rlu
                    section.data(82).logicalSrcIdx = 83;
                    section.data(82).dtTransOffset = 684;

                    ;% cuhiq2he3xv.kpz0fum4jx
                    section.data(83).logicalSrcIdx = 84;
                    section.data(83).dtTransOffset = 685;

                    ;% cuhiq2he3xv.avyl4rftay
                    section.data(84).logicalSrcIdx = 85;
                    section.data(84).dtTransOffset = 686;

                    ;% cuhiq2he3xv.mlkrs1nwnz
                    section.data(85).logicalSrcIdx = 86;
                    section.data(85).dtTransOffset = 687;

                    ;% cuhiq2he3xv.lw2sqz3qnd
                    section.data(86).logicalSrcIdx = 87;
                    section.data(86).dtTransOffset = 688;

                    ;% cuhiq2he3xv.m1l1u42xrf
                    section.data(87).logicalSrcIdx = 88;
                    section.data(87).dtTransOffset = 689;

                    ;% cuhiq2he3xv.imnt2v1zkq
                    section.data(88).logicalSrcIdx = 89;
                    section.data(88).dtTransOffset = 690;

                    ;% cuhiq2he3xv.ifsszmtacm
                    section.data(89).logicalSrcIdx = 90;
                    section.data(89).dtTransOffset = 691;

                    ;% cuhiq2he3xv.pfur2fmy1z
                    section.data(90).logicalSrcIdx = 91;
                    section.data(90).dtTransOffset = 692;

                    ;% cuhiq2he3xv.mqqrzg0clr
                    section.data(91).logicalSrcIdx = 92;
                    section.data(91).dtTransOffset = 693;

                    ;% cuhiq2he3xv.o5bbi4nmva
                    section.data(92).logicalSrcIdx = 93;
                    section.data(92).dtTransOffset = 694;

                    ;% cuhiq2he3xv.jspshln155
                    section.data(93).logicalSrcIdx = 96;
                    section.data(93).dtTransOffset = 695;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% cuhiq2he3xv.obtzbv3oqr
                    section.data(1).logicalSrcIdx = 99;
                    section.data(1).dtTransOffset = 0;

                    ;% cuhiq2he3xv.jnh3l0n1k5
                    section.data(2).logicalSrcIdx = 100;
                    section.data(2).dtTransOffset = 1;

                    ;% cuhiq2he3xv.bexoc20jd2
                    section.data(3).logicalSrcIdx = 101;
                    section.data(3).dtTransOffset = 97;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cuhiq2he3xv.przvd0w4hd
                    section.data(1).logicalSrcIdx = 102;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cuhiq2he3xv.eeny0h4lwy
                    section.data(1).logicalSrcIdx = 103;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% cuhiq2he3xv.fd5vhxn522
                    section.data(1).logicalSrcIdx = 104;
                    section.data(1).dtTransOffset = 0;

                    ;% cuhiq2he3xv.hlr5waurua
                    section.data(2).logicalSrcIdx = 105;
                    section.data(2).dtTransOffset = 1;

                    ;% cuhiq2he3xv.lt2astw3oy
                    section.data(3).logicalSrcIdx = 106;
                    section.data(3).dtTransOffset = 2;

                    ;% cuhiq2he3xv.dbbveecmrs
                    section.data(4).logicalSrcIdx = 107;
                    section.data(4).dtTransOffset = 3;

                    ;% cuhiq2he3xv.kwuy3vap0b
                    section.data(5).logicalSrcIdx = 108;
                    section.data(5).dtTransOffset = 4;

                    ;% cuhiq2he3xv.ddw4r03rdd
                    section.data(6).logicalSrcIdx = 109;
                    section.data(6).dtTransOffset = 5;

                    ;% cuhiq2he3xv.pvq5cdapvp
                    section.data(7).logicalSrcIdx = 110;
                    section.data(7).dtTransOffset = 6;

                    ;% cuhiq2he3xv.b0dgot5a0g
                    section.data(8).logicalSrcIdx = 111;
                    section.data(8).dtTransOffset = 7;

                    ;% cuhiq2he3xv.l3da1b0tbm
                    section.data(9).logicalSrcIdx = 112;
                    section.data(9).dtTransOffset = 8;

                    ;% cuhiq2he3xv.fjngm2jfcz
                    section.data(10).logicalSrcIdx = 113;
                    section.data(10).dtTransOffset = 9;

                    ;% cuhiq2he3xv.ide52jc1xl
                    section.data(11).logicalSrcIdx = 114;
                    section.data(11).dtTransOffset = 10;

                    ;% cuhiq2he3xv.by2opoctqb
                    section.data(12).logicalSrcIdx = 115;
                    section.data(12).dtTransOffset = 11;

                    ;% cuhiq2he3xv.h4vbxbl4u1
                    section.data(13).logicalSrcIdx = 116;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cuhiq2he3xv.ciwxigmsq2.bd2ndavyho
                    section.data(1).logicalSrcIdx = 117;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cuhiq2he3xv.g30v1kdrwbo.bd2ndavyho
                    section.data(1).logicalSrcIdx = 118;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 18;
        sectIdxOffset = 9;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (giqt2tul5wr)
        ;%
            section.nData     = 42;
            section.data(42)  = dumData; %prealloc

                    ;% giqt2tul5wr.p3iatbuorl
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.oyf31f32r1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% giqt2tul5wr.dlo02ztcii
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% giqt2tul5wr.juhg1joriu
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% giqt2tul5wr.phmddq1zkx
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% giqt2tul5wr.jwpc1uzeor
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 7;

                    ;% giqt2tul5wr.l4pn2msb3d
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% giqt2tul5wr.oeaskjkfsr
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% giqt2tul5wr.k4zhoquz4c
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% giqt2tul5wr.fbroivbf3k
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% giqt2tul5wr.mkiptczwen
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% giqt2tul5wr.gyxsg3hoeg
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% giqt2tul5wr.cl5jwb0b3t
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% giqt2tul5wr.m1lyfkk4wz
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% giqt2tul5wr.arwg2hasvu
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% giqt2tul5wr.gzyrjrunwy
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% giqt2tul5wr.cjijsufndg
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 19;

                    ;% giqt2tul5wr.keqs0k3sdq
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% giqt2tul5wr.alxnn4vrl1
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% giqt2tul5wr.my5si44j4x
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% giqt2tul5wr.gkios1beqo
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% giqt2tul5wr.jidxlsm5se
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% giqt2tul5wr.jsjjbflcse
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% giqt2tul5wr.dzxddx5cen
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% giqt2tul5wr.apn1h34r15
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% giqt2tul5wr.ilvsdo0oga
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% giqt2tul5wr.iap4dpl4zs
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 29;

                    ;% giqt2tul5wr.fr1sahkypq
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 30;

                    ;% giqt2tul5wr.ie0iddjxra
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 31;

                    ;% giqt2tul5wr.givtfh51qo
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 32;

                    ;% giqt2tul5wr.cj4gapd3fs
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 33;

                    ;% giqt2tul5wr.eww50ci0u5
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 34;

                    ;% giqt2tul5wr.gyrmkznnvz
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 35;

                    ;% giqt2tul5wr.gupn4h5qkp
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 36;

                    ;% giqt2tul5wr.dxz1p5izxq
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 37;

                    ;% giqt2tul5wr.okzsrfvbia
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 38;

                    ;% giqt2tul5wr.ahhxtrgluu
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 39;

                    ;% giqt2tul5wr.mwwvksjbpb
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 40;

                    ;% giqt2tul5wr.ipsejbdjkv
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 41;

                    ;% giqt2tul5wr.kr24afjbvy
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 42;

                    ;% giqt2tul5wr.mgyqdv05fz
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 43;

                    ;% giqt2tul5wr.hvilkifux1
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 44;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% giqt2tul5wr.ikimkrkcjx
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.bwumius5mm
                    section.data(2).logicalSrcIdx = 43;
                    section.data(2).dtTransOffset = 1;

                    ;% giqt2tul5wr.dtn4zzzaee
                    section.data(3).logicalSrcIdx = 44;
                    section.data(3).dtTransOffset = 2;

                    ;% giqt2tul5wr.cdfj0j1cvx
                    section.data(4).logicalSrcIdx = 45;
                    section.data(4).dtTransOffset = 3;

                    ;% giqt2tul5wr.kypnp3kmdt
                    section.data(5).logicalSrcIdx = 46;
                    section.data(5).dtTransOffset = 4;

                    ;% giqt2tul5wr.jhwviyiicw
                    section.data(6).logicalSrcIdx = 47;
                    section.data(6).dtTransOffset = 5;

                    ;% giqt2tul5wr.kykwshfv1u
                    section.data(7).logicalSrcIdx = 48;
                    section.data(7).dtTransOffset = 6;

                    ;% giqt2tul5wr.iviog2qp5o
                    section.data(8).logicalSrcIdx = 49;
                    section.data(8).dtTransOffset = 7;

                    ;% giqt2tul5wr.g1wyg1abb4
                    section.data(9).logicalSrcIdx = 50;
                    section.data(9).dtTransOffset = 8;

                    ;% giqt2tul5wr.n3a52jp2m5
                    section.data(10).logicalSrcIdx = 51;
                    section.data(10).dtTransOffset = 9;

                    ;% giqt2tul5wr.bfcnmonz0t
                    section.data(11).logicalSrcIdx = 52;
                    section.data(11).dtTransOffset = 10;

                    ;% giqt2tul5wr.bifyhkr5xr
                    section.data(12).logicalSrcIdx = 53;
                    section.data(12).dtTransOffset = 11;

                    ;% giqt2tul5wr.asdmqibftz
                    section.data(13).logicalSrcIdx = 54;
                    section.data(13).dtTransOffset = 12;

                    ;% giqt2tul5wr.hrr5yk13zy
                    section.data(14).logicalSrcIdx = 55;
                    section.data(14).dtTransOffset = 13;

                    ;% giqt2tul5wr.iqsnio5jpk
                    section.data(15).logicalSrcIdx = 56;
                    section.data(15).dtTransOffset = 14;

                    ;% giqt2tul5wr.egtg1gdtyo
                    section.data(16).logicalSrcIdx = 57;
                    section.data(16).dtTransOffset = 15;

                    ;% giqt2tul5wr.hp0aqxmuww.LoggedData
                    section.data(17).logicalSrcIdx = 58;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.nedhadhu3t
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% giqt2tul5wr.odxrkracyb
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.fuq0idaz5u
                    section.data(2).logicalSrcIdx = 61;
                    section.data(2).dtTransOffset = 1;

                    ;% giqt2tul5wr.code54py1j
                    section.data(3).logicalSrcIdx = 62;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% giqt2tul5wr.azfkgqxasv
                    section.data(1).logicalSrcIdx = 63;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.imczkcsnw3
                    section.data(2).logicalSrcIdx = 64;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% giqt2tul5wr.lstbvo4uss
                    section.data(1).logicalSrcIdx = 65;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.cuk0updp4b
                    section.data(2).logicalSrcIdx = 66;
                    section.data(2).dtTransOffset = 246;

                    ;% giqt2tul5wr.go23v0n4e4
                    section.data(3).logicalSrcIdx = 67;
                    section.data(3).dtTransOffset = 247;

                    ;% giqt2tul5wr.g1z0l2rflt
                    section.data(4).logicalSrcIdx = 68;
                    section.data(4).dtTransOffset = 248;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.o1jqp4wpbb
                    section.data(1).logicalSrcIdx = 69;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% giqt2tul5wr.liwdzlex20
                    section.data(1).logicalSrcIdx = 70;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.fumd4zvnkk
                    section.data(2).logicalSrcIdx = 71;
                    section.data(2).dtTransOffset = 1;

                    ;% giqt2tul5wr.ibuccqrkws
                    section.data(3).logicalSrcIdx = 72;
                    section.data(3).dtTransOffset = 2;

                    ;% giqt2tul5wr.kvdz2ebfhv
                    section.data(4).logicalSrcIdx = 73;
                    section.data(4).dtTransOffset = 3;

                    ;% giqt2tul5wr.bhnsby0fli
                    section.data(5).logicalSrcIdx = 74;
                    section.data(5).dtTransOffset = 4;

                    ;% giqt2tul5wr.mwgqdelv1f
                    section.data(6).logicalSrcIdx = 75;
                    section.data(6).dtTransOffset = 5;

                    ;% giqt2tul5wr.kltct411us
                    section.data(7).logicalSrcIdx = 76;
                    section.data(7).dtTransOffset = 6;

                    ;% giqt2tul5wr.hszqsxfvz0
                    section.data(8).logicalSrcIdx = 77;
                    section.data(8).dtTransOffset = 7;

                    ;% giqt2tul5wr.pzhspsqiej
                    section.data(9).logicalSrcIdx = 78;
                    section.data(9).dtTransOffset = 8;

                    ;% giqt2tul5wr.aevxwrdkrx
                    section.data(10).logicalSrcIdx = 79;
                    section.data(10).dtTransOffset = 9;

                    ;% giqt2tul5wr.b5jqdqfiw3
                    section.data(11).logicalSrcIdx = 80;
                    section.data(11).dtTransOffset = 10;

                    ;% giqt2tul5wr.im4sg3gugq
                    section.data(12).logicalSrcIdx = 81;
                    section.data(12).dtTransOffset = 11;

                    ;% giqt2tul5wr.lz2gyqiob1
                    section.data(13).logicalSrcIdx = 82;
                    section.data(13).dtTransOffset = 12;

                    ;% giqt2tul5wr.fde5kmnnd2
                    section.data(14).logicalSrcIdx = 83;
                    section.data(14).dtTransOffset = 13;

                    ;% giqt2tul5wr.lrwbi350ti
                    section.data(15).logicalSrcIdx = 84;
                    section.data(15).dtTransOffset = 14;

                    ;% giqt2tul5wr.dapk13hkuj
                    section.data(16).logicalSrcIdx = 85;
                    section.data(16).dtTransOffset = 15;

                    ;% giqt2tul5wr.gqvgelmask
                    section.data(17).logicalSrcIdx = 86;
                    section.data(17).dtTransOffset = 16;

                    ;% giqt2tul5wr.pyshnl4n4o
                    section.data(18).logicalSrcIdx = 87;
                    section.data(18).dtTransOffset = 17;

                    ;% giqt2tul5wr.jkb4mvplww
                    section.data(19).logicalSrcIdx = 88;
                    section.data(19).dtTransOffset = 18;

                    ;% giqt2tul5wr.ade3ahyo1e
                    section.data(20).logicalSrcIdx = 89;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% giqt2tul5wr.gmldgqtpy3
                    section.data(1).logicalSrcIdx = 90;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.o23aklsczm
                    section.data(2).logicalSrcIdx = 91;
                    section.data(2).dtTransOffset = 1;

                    ;% giqt2tul5wr.emkg42qjo3
                    section.data(3).logicalSrcIdx = 92;
                    section.data(3).dtTransOffset = 2;

                    ;% giqt2tul5wr.inllocuypf
                    section.data(4).logicalSrcIdx = 93;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% giqt2tul5wr.nhfzola4qr
                    section.data(1).logicalSrcIdx = 94;
                    section.data(1).dtTransOffset = 0;

                    ;% giqt2tul5wr.m21cmnmmdk
                    section.data(2).logicalSrcIdx = 95;
                    section.data(2).dtTransOffset = 1;

                    ;% giqt2tul5wr.m1zratuqz4
                    section.data(3).logicalSrcIdx = 96;
                    section.data(3).dtTransOffset = 2;

                    ;% giqt2tul5wr.jgorjlljdk
                    section.data(4).logicalSrcIdx = 97;
                    section.data(4).dtTransOffset = 3;

                    ;% giqt2tul5wr.cpgm3bdawj
                    section.data(5).logicalSrcIdx = 98;
                    section.data(5).dtTransOffset = 4;

                    ;% giqt2tul5wr.izevsizlwm
                    section.data(6).logicalSrcIdx = 99;
                    section.data(6).dtTransOffset = 5;

                    ;% giqt2tul5wr.pncmmapinm
                    section.data(7).logicalSrcIdx = 100;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.igqkoslatl
                    section.data(1).logicalSrcIdx = 101;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.isvmsyyglk
                    section.data(1).logicalSrcIdx = 102;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.m03tkajmio
                    section.data(1).logicalSrcIdx = 103;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.ekun4ztdyk
                    section.data(1).logicalSrcIdx = 104;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.ciwxigmsq2.iqmyanxtr1
                    section.data(1).logicalSrcIdx = 105;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.ciwxigmsq2.mc3fhmonso
                    section.data(1).logicalSrcIdx = 106;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.g30v1kdrwbo.iqmyanxtr1
                    section.data(1).logicalSrcIdx = 107;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% giqt2tul5wr.g30v1kdrwbo.mc3fhmonso
                    section.data(1).logicalSrcIdx = 108;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1678879199;
    targMap.checksum1 = 458555119;
    targMap.checksum2 = 784608942;
    targMap.checksum3 = 1656421520;

