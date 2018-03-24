namespace Ampelprojekt
{
    class Steuerung
    {
        private Ampelform Ampel;
        private int Zustand;
        private const int ZUSTAND_AUS     = 0;
        private const int ZUSTAND_GELB    = 1;
        private const int ZUSTAND_ROT     = 2;
        private const int ZUSTAND_ROTGELB = 3;
        private const int ZUSTAND_GRUEN   = 4;
        private const int ZUSTAND_BLINKEN = 5;

        public Steuerung(int x, int y)
        {
            Ampel = new Ampelform(x, y);
            Zustand = ZUSTAND_AUS;
        }

        public void ein()
        {
            if(Zustand == ZUSTAND_AUS) // aus?
            {
                Zustand = ZUSTAND_GELB; // gelb
                Ampel.GelbEin();
            }
        }

        public void aus()
        {
            if (Zustand == ZUSTAND_GELB || Zustand == ZUSTAND_ROT)
            {
                Zustand = ZUSTAND_AUS;
                Ampel.GelbAus();
                Ampel.RotAus();
            }
            else if (Zustand == ZUSTAND_BLINKEN)
            {
                Zustand = ZUSTAND_AUS;
                Ampel.BlinkenAus();
            }
        }

        public void um()
        {
            switch(Zustand)
            {
                case ZUSTAND_GELB:
                    Zustand = ZUSTAND_ROT;
                    Ampel.RotEin();
                    Ampel.GelbAus();
                    break;
                case ZUSTAND_ROT:
                    Zustand = ZUSTAND_ROTGELB;
                    Ampel.GelbEin();
                    break;
                case ZUSTAND_ROTGELB:
                    Zustand = ZUSTAND_GRUEN;
                    Ampel.GelbAus();
                    Ampel.RotAus();
                    Ampel.GruenEin();
                    break;
                case ZUSTAND_GRUEN:
                    Zustand = ZUSTAND_GELB;
                    Ampel.GruenAus();
                    Ampel.GelbEin();
                    break;
                default:
                    break;
            }
        }

        public void blinken()
        {
            Zustand = ZUSTAND_BLINKEN;
            Ampel.BlinkenEin();
            Ampel.GruenAus();
            Ampel.RotAus();
        }
    }
}
