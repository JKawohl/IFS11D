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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Ampelprojekt
{
    /// <summary>
    /// Interaktionslogik für MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private KSteuerung steuerung;
        public MainWindow()
        {
            InitializeComponent();
            this.Left = 200;
            this.Top = 100;
            steuerung = new KSteuerung();
        }

        private void btnEin_Click(object sender, RoutedEventArgs e)
        {
            steuerung.ein();
        }

        private void btnAus_Click(object sender, RoutedEventArgs e)
        {
            steuerung.aus();
        }

        private void btnUm_Click(object sender, RoutedEventArgs e)
        {
            steuerung.um();
        }

        private void btnEnde_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void Window_Closed(object sender, EventArgs e)
        {
            Application.Current.Shutdown();
        }

        private void btnBlink_Click(object sender, RoutedEventArgs e)
        {
            steuerung.blinken();
        }
    }
}
