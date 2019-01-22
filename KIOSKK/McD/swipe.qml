import QtQuick 2.9
import QtQuick.Controls 2.2

Item {
    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form {
            btn_bg_6.onClicked: {
                MainWindow.ShowBurgerInfoDetails("cen");
}
            btn_bg_5.onClicked: {
                MainWindow.ShowBurgerInfoDetails("SangHai");
            }
            btn_bg_4.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Big");
            }
            btn_bg_3.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Lucky");
            }
            btn_bg_2.onClicked: {
                MainWindow.ShowBurgerInfoDetails("DB");
            }
            btn_bg_1.onClicked: {
                MainWindow.ShowBurgerInfoDetails("SS");
            }


        }

        Page2Form {
            btn_bg_8.onClicked: {
                MainWindow.ShowBurgerInfoDetails("GEC");
}
            btn_bg_7.onClicked: {
                MainWindow.ShowBurgerInfoDetails("BTD");
}

        }
    }


}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
