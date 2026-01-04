class CfgVehicles {
    class GCLASS(Base_BLUFOR);

    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t2_blufor);
        displayName = "Khaybara Base";
        @Identity(Ngabiri);//FIXME
        @Templated();
    };
};
