import QtQuick 2.9
import QtQuick.Controls 2.2

Item {
    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form_des {

            btn_bg_3.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Shan", 2);
            }
            btn_bg_2.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Conn", 2);
            }
            btn_bg_1.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Ches", 2);
            }


        }


    }


}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
