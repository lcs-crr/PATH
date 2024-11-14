classdef SRE < Simulink.IntEnumType
  enumeration
    Balancing(0)
    Charging(1)
    Driving(2)
  end
  methods (Static)
    function retVal = getDefaultValue()
      retVal = SRE.Balancing;
    end
    function retVal =getHeaderFile()
      retVal = 'Rte_Type.h';
    end
  end
end 