import QtQuick 2.9
import QtQuick.Controls 2.2

Item {
    SwipeView {
        id: swipeView3
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form_5 {

            btn_bg_1.onClicked: {
                //MainWindow.ShowBurgerInfoDetails("Cafe", 1);
                MainWindow.ShowPaymentPage();
            }


        }

        Page2Form_5 {
            btn_bg_8.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Milk", 1);
}
            btn_bg_7.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Orange", 1);
}

        }
    }


}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
