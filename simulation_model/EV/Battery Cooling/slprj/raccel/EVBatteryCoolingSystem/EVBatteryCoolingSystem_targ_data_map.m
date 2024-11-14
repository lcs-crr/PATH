    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
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
        ;% Auto data (rtP)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.radiator
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.pump
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 41;
            section.data(41)  = dumData; %prealloc

                    ;% rtP.T_env
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.T_init
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.T_set
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController_D
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController_I
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController_Kb
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController_LowerSaturationLimit
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController_N
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController_P
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController_UpperSaturationLimit
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.fromWS_Signal1_Time0
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.fromWS_Signal1_Data0
                    section.data(14).logicalSrcIdx = 15;
                    section.data(14).dtTransOffset = 264091;

                    ;% rtP.Airvelocityms_Bias
                    section.data(15).logicalSrcIdx = 16;
                    section.data(15).dtTransOffset = 528170;

                    ;% rtP.FromWorkspace_Time0
                    section.data(16).logicalSrcIdx = 17;
                    section.data(16).dtTransOffset = 528171;

                    ;% rtP.FromWorkspace_Data0
                    section.data(17).logicalSrcIdx = 18;
                    section.data(17).dtTransOffset = 792250;

                    ;% rtP.Pumpresponsedelay_A
                    section.data(18).logicalSrcIdx = 19;
                    section.data(18).dtTransOffset = 1056329;

                    ;% rtP.Pumpresponsedelay_C
                    section.data(19).logicalSrcIdx = 20;
                    section.data(19).dtTransOffset = 1056330;

                    ;% rtP.StateSpace_A_pr
                    section.data(20).logicalSrcIdx = 21;
                    section.data(20).dtTransOffset = 1056331;

                    ;% rtP.StateSpace_B_pr
                    section.data(21).logicalSrcIdx = 22;
                    section.data(21).dtTransOffset = 1056332;

                    ;% rtP.StateSpace_C_pr
                    section.data(22).logicalSrcIdx = 23;
                    section.data(22).dtTransOffset = 1056333;

                    ;% rtP.StateSpace_InitialCondition
                    section.data(23).logicalSrcIdx = 24;
                    section.data(23).dtTransOffset = 1056334;

                    ;% rtP.kW_Gain
                    section.data(24).logicalSrcIdx = 25;
                    section.data(24).dtTransOffset = 1056335;

                    ;% rtP.Efficiency_Gain
                    section.data(25).logicalSrcIdx = 26;
                    section.data(25).dtTransOffset = 1056336;

                    ;% rtP.Relay_OnVal
                    section.data(26).logicalSrcIdx = 27;
                    section.data(26).dtTransOffset = 1056337;

                    ;% rtP.Relay_OffVal
                    section.data(27).logicalSrcIdx = 28;
                    section.data(27).dtTransOffset = 1056338;

                    ;% rtP.Relay_YOn
                    section.data(28).logicalSrcIdx = 29;
                    section.data(28).dtTransOffset = 1056339;

                    ;% rtP.Relay_YOff
                    section.data(29).logicalSrcIdx = 30;
                    section.data(29).dtTransOffset = 1056340;

                    ;% rtP.Airdensitykgm3_Value
                    section.data(30).logicalSrcIdx = 31;
                    section.data(30).dtTransOffset = 1056341;

                    ;% rtP.RTP_731D9D8D_T_Value
                    section.data(31).logicalSrcIdx = 32;
                    section.data(31).dtTransOffset = 1056342;

                    ;% rtP.RTP_7EE98BC0_T_Value
                    section.data(32).logicalSrcIdx = 33;
                    section.data(32).dtTransOffset = 1056343;

                    ;% rtP.RTP_95CC90AC_T_Value
                    section.data(33).logicalSrcIdx = 34;
                    section.data(33).dtTransOffset = 1056344;

                    ;% rtP.RTP_7D09336B_T_Value
                    section.data(34).logicalSrcIdx = 35;
                    section.data(34).dtTransOffset = 1056345;

                    ;% rtP.Constant2_Value
                    section.data(35).logicalSrcIdx = 36;
                    section.data(35).dtTransOffset = 1056346;

                    ;% rtP.Constant3_Value
                    section.data(36).logicalSrcIdx = 37;
                    section.data(36).dtTransOffset = 1056347;

                    ;% rtP.Constant_Value
                    section.data(37).logicalSrcIdx = 38;
                    section.data(37).dtTransOffset = 1056348;

                    ;% rtP.Constant1_Value
                    section.data(38).logicalSrcIdx = 39;
                    section.data(38).dtTransOffset = 1056349;

                    ;% rtP.RTP_A90ABFEE_level_Value
                    section.data(39).logicalSrcIdx = 40;
                    section.data(39).dtTransOffset = 1056350;

                    ;% rtP.RTP_A90ABFEE_p_gas_Value
                    section.data(40).logicalSrcIdx = 41;
                    section.data(40).dtTransOffset = 1056351;

                    ;% rtP.RTP_A90ABFEE_volume_liquid_Value
                    section.data(41).logicalSrcIdx = 42;
                    section.data(41).dtTransOffset = 1056352;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtP.StateSpace_A_ir
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.StateSpace_A_jc
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.StateSpace_B_ir
                    section.data(3).logicalSrcIdx = 45;
                    section.data(3).dtTransOffset = 3;

                    ;% rtP.StateSpace_B_jc
                    section.data(4).logicalSrcIdx = 46;
                    section.data(4).dtTransOffset = 4;

                    ;% rtP.StateSpace_C_ir
                    section.data(5).logicalSrcIdx = 47;
                    section.data(5).dtTransOffset = 6;

                    ;% rtP.StateSpace_C_jc
                    section.data(6).logicalSrcIdx = 48;
                    section.data(6).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.Gain1_Gain
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Gain2_Gain
                    section.data(2).logicalSrcIdx = 50;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Gain_Gain
                    section.data(3).logicalSrcIdx = 51;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
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
        ;% Auto data (rtB)
        ;%
            section.nData     = 33;
            section.data(33)  = dumData; %prealloc

                    ;% rtB.hdgi0ckwmt
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.kvdm2qa4kz
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.bdmsuutsho
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.g4x5d1kqrr
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.jjbuzly2c4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtB.hmdfvofm2d
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtB.awjh3m2i52
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% rtB.c4vppbzui3
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 13;

                    ;% rtB.kj5ged5ouv
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 17;

                    ;% rtB.guzkycy441
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 18;

                    ;% rtB.e4dmel4npm
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 19;

                    ;% rtB.daxysc2t0q
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 20;

                    ;% rtB.ktxsqan1ix
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 21;

                    ;% rtB.ox2ag4rjwi
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 22;

                    ;% rtB.ktdys5yo0t
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 23;

                    ;% rtB.jdzew5kwiu
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 24;

                    ;% rtB.n1kdcxnjx2
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 25;

                    ;% rtB.cwyp0u4fxj
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 26;

                    ;% rtB.ek2xrgvbnw
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 27;

                    ;% rtB.apvg0yhoqc
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 28;

                    ;% rtB.g5jq2txgex
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 32;

                    ;% rtB.ci1eqffra0
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 33;

                    ;% rtB.cizm5vaana
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 616;

                    ;% rtB.e2egazwdtp
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 623;

                    ;% rtB.eaf2lxhueg
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 624;

                    ;% rtB.ne3aknl42j
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 625;

                    ;% rtB.cbztcpotvv
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 626;

                    ;% rtB.obweg0l22f
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 627;

                    ;% rtB.mijc1dwvec
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 628;

                    ;% rtB.j4w0fnlfbw
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 629;

                    ;% rtB.gmef4hcfga
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 630;

                    ;% rtB.onxkezlpwm
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 631;

                    ;% rtB.g4gjxqt3j1
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 632;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.pat4o3qai3
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
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
        nTotSects     = 5;
        sectIdxOffset = 2;

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
        ;% Auto data (rtDW)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtDW.medpwyauzm
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.of51ysnuoh
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ksimmcd4jh
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.izuzdb3pa3
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% rtDW.gran21d1p5
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% rtDW.eztgjvjrnk
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 7;

                    ;% rtDW.pahluld41k
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% rtDW.mjvwcs3qal
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

                    ;% rtDW.ps2h2vwltm
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtDW.iw3e0ho3nl.TimePtr
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pz4i2vr5t2.TimePtr
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gfzyhdldpe
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.b1a0qim2yg
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.pg1peeaap2
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.bglls0p5vn
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.adlk3xlwah
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.bklx0nlsq4
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.izgcpovxyi
                    section.data(9).logicalSrcIdx = 17;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.gvo41anqta
                    section.data(10).logicalSrcIdx = 18;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.nrhx2nf1go
                    section.data(11).logicalSrcIdx = 19;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.eakmxycvft
                    section.data(12).logicalSrcIdx = 20;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.mydqtnb00k
                    section.data(13).logicalSrcIdx = 21;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.o1ucbdw3qn
                    section.data(14).logicalSrcIdx = 22;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.i0lluemaxm
                    section.data(15).logicalSrcIdx = 23;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.cm54eojqab
                    section.data(16).logicalSrcIdx = 24;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.mqpsatgjax
                    section.data(17).logicalSrcIdx = 25;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.n2rit51csc
                    section.data(18).logicalSrcIdx = 26;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.jr4tel5t0f.LoggedData
                    section.data(19).logicalSrcIdx = 27;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.b3yt44zx0e
                    section.data(20).logicalSrcIdx = 28;
                    section.data(20).dtTransOffset = 22;

                    ;% rtDW.dp32jrdpwa
                    section.data(21).logicalSrcIdx = 29;
                    section.data(21).dtTransOffset = 23;

                    ;% rtDW.lnxt42nhut
                    section.data(22).logicalSrcIdx = 30;
                    section.data(22).dtTransOffset = 24;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.mpmzqyoat0.PrevIndex
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.psiva0oxeh.PrevIndex
                    section.data(2).logicalSrcIdx = 32;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.idk0zphtpp
                    section.data(3).logicalSrcIdx = 33;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.eya4mzvurp
                    section.data(4).logicalSrcIdx = 34;
                    section.data(4).dtTransOffset = 248;

                    ;% rtDW.lqagrnen3f
                    section.data(5).logicalSrcIdx = 35;
                    section.data(5).dtTransOffset = 249;

                    ;% rtDW.fni05y3dyi
                    section.data(6).logicalSrcIdx = 36;
                    section.data(6).dtTransOffset = 250;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.olbucdh0u4
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.mhoqdxbzwj
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jbqbh3jmih
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jy4nc0czxn
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.bhmzfrq3x3
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.m53bymnnod
                    section.data(5).logicalSrcIdx = 42;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
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


    targMap.checksum0 = 2345401999;
    targMap.checksum1 = 1799780700;
    targMap.checksum2 = 1412942005;
    targMap.checksum3 = 74665851;

