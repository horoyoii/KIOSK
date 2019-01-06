import QtQuick 2.9
import QtQuick.Controls 2.2

Item {
    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form {
            btn_bg_6.onClicked: {
                MainWindow.ShowBurgerInfoDetails("1955");
}
            btn_bg_5.onClicked: {
                MainWindow.ShowBurgerInfoDetails("sanghai");
            }
            btn_bg_4.onClicked: {
                MainWindow.ShowBurgerInfoDetails("big");
            }
            btn_bg_3.onClicked: {
                MainWindow.ShowBurgerInfoDetails("lucky");
            }
            btn_bg_2.onClicked: {
                MainWindow.ShowBurgerInfoDetails("double");
            }
            btn_bg_1.onClicked: {
                MainWindow.ShowBurgerInfoDetails("susu");
}


        }

        Page2Form {

        }
    }


}
