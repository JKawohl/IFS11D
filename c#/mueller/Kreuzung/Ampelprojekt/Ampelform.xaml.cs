using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using System.Windows.Threading;

namespace Ampelprojekt
{
    /// <summary>
    /// Interaktionslogik für Ampelform.xaml
    /// </summary>
    public partial class Ampelform : Window
    {
        private DispatcherTimer BlinkTimer = new DispatcherTimer();
        private static readonly int BLINK_INTERVALL = 1; // in sekunden
        private bool GelbLeuchtet;

        public Ampelform(int x, int y)
        {
            InitializeComponent();
            this.Left = x;
            this.Top = y;
            this.Show();

            RotAus();
            GelbAus();
            GruenAus();

            BlinkTimer.Interval = new TimeSpan(0, 0, BLINK_INTERVALL);
            BlinkTimer.Tick += blinken;
        }

        private void blinken(object sender, EventArgs e)
        {
            if (GelbLeuchtet)
            {
                GelbAus();
            }
            else
            {
                GelbEin();
            }
        }

        public void RotEin()
        {
            ellRot.Fill = new SolidColorBrush(Colors.Red);
        }

        public void RotAus()
        {
            ellRot.Fill = new SolidColorBrush(Colors.Black);
        }

        public void GelbEin()
        {
            ellGelb.Fill = new SolidColorBrush(Colors.Yellow);
            GelbLeuchtet = true;
        }

        public void GelbAus()
        {
            ellGelb.Fill = new SolidColorBrush(Colors.Black);
            GelbLeuchtet = false;
        }

        public void GruenEin()
        {
            ellGruen.Fill = new SolidColorBrush(Colors.Green);
        }

        public void GruenAus()
        {
            ellGruen.Fill = new SolidColorBrush(Colors.Black);
        }

        public void BlinkenEin()
        {
            GelbEin();
            BlinkTimer.Start();
        }

        public void BlinkenAus()
        {
            BlinkTimer.Stop();
            GelbAus();
        }
    }
}
