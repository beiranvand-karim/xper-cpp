#ifndef MOVEITEMHANDLER_H
#define MOVEITEMHANDLER_H

#include <QGraphicsView>
#include <QObject>
#include <maincanvas.h>

class MoveItemHandler : public QObject {
  Q_OBJECT
public:
  MoveItemHandler(QGraphicsView *view, MainCanvas *canvas);

  void setDrawState(CanvasState::State newDrawState);

private:
  bool eventFilter(QObject *object, QEvent *event) override;

  QGraphicsView *view;
  MainCanvas *canvas;
  Qt::KeyboardModifiers modifiers;
  CanvasState::State drawState;
};

#endif // MOVEITEMHANDLER_H
