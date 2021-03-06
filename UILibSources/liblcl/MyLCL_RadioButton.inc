
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function RadioButton_Create(AOwner: TComponent): TRadioButton; extdecl;
begin
  Result :=  TRadioButton.Create(AOwner);
end;

procedure RadioButton_Free(AObj: TRadioButton); extdecl;
begin
  AObj.Free;
end;

function RadioButton_CanFocus(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function RadioButton_ContainsControl(AObj: TRadioButton; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function RadioButton_ControlAtPos(AObj: TRadioButton; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure RadioButton_DisableAlign(AObj: TRadioButton); extdecl;
begin
  AObj.DisableAlign;
end;

procedure RadioButton_EnableAlign(AObj: TRadioButton); extdecl;
begin
  AObj.EnableAlign;
end;

function RadioButton_FindChildControl(AObj: TRadioButton; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure RadioButton_FlipChildren(AObj: TRadioButton; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function RadioButton_Focused(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function RadioButton_HandleAllocated(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure RadioButton_InsertControl(AObj: TRadioButton; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure RadioButton_Invalidate(AObj: TRadioButton); extdecl;
begin
  AObj.Invalidate;
end;

procedure RadioButton_RemoveControl(AObj: TRadioButton; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure RadioButton_Realign(AObj: TRadioButton); extdecl;
begin
  AObj.Realign;
end;

procedure RadioButton_Repaint(AObj: TRadioButton); extdecl;
begin
  AObj.Repaint;
end;

procedure RadioButton_ScaleBy(AObj: TRadioButton; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure RadioButton_ScrollBy(AObj: TRadioButton; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure RadioButton_SetBounds(AObj: TRadioButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure RadioButton_SetFocus(AObj: TRadioButton); extdecl;
begin
  AObj.SetFocus;
end;

procedure RadioButton_Update(AObj: TRadioButton); extdecl;
begin
  AObj.Update;
end;

procedure RadioButton_BringToFront(AObj: TRadioButton); extdecl;
begin
  AObj.BringToFront;
end;

procedure RadioButton_ClientToScreen(AObj: TRadioButton; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure RadioButton_ClientToParent(AObj: TRadioButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function RadioButton_Dragging(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function RadioButton_HasParent(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure RadioButton_Hide(AObj: TRadioButton); extdecl;
begin
  AObj.Hide;
end;

function RadioButton_Perform(AObj: TRadioButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure RadioButton_Refresh(AObj: TRadioButton); extdecl;
begin
  AObj.Refresh;
end;

procedure RadioButton_ScreenToClient(AObj: TRadioButton; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure RadioButton_ParentToClient(AObj: TRadioButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure RadioButton_SendToBack(AObj: TRadioButton); extdecl;
begin
  AObj.SendToBack;
end;

procedure RadioButton_Show(AObj: TRadioButton); extdecl;
begin
  AObj.Show;
end;

function RadioButton_GetTextBuf(AObj: TRadioButton; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function RadioButton_GetTextLen(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure RadioButton_SetTextBuf(AObj: TRadioButton; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function RadioButton_FindComponent(AObj: TRadioButton; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function RadioButton_GetNamePath(AObj: TRadioButton): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure RadioButton_Assign(AObj: TRadioButton; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function RadioButton_ClassType(AObj: TRadioButton): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function RadioButton_ClassName(AObj: TRadioButton): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function RadioButton_InstanceSize(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function RadioButton_InheritsFrom(AObj: TRadioButton; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function RadioButton_Equals(AObj: TRadioButton; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function RadioButton_GetHashCode(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function RadioButton_ToString(AObj: TRadioButton): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function RadioButton_GetAction(AObj: TRadioButton): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure RadioButton_SetAction(AObj: TRadioButton; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function RadioButton_GetAlign(AObj: TRadioButton): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure RadioButton_SetAlign(AObj: TRadioButton; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function RadioButton_GetAlignment(AObj: TRadioButton): TLeftRight; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure RadioButton_SetAlignment(AObj: TRadioButton; AValue: TLeftRight); extdecl;
begin
  AObj.Alignment := AValue;
end;

function RadioButton_GetAnchors(AObj: TRadioButton): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure RadioButton_SetAnchors(AObj: TRadioButton; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function RadioButton_GetBiDiMode(AObj: TRadioButton): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure RadioButton_SetBiDiMode(AObj: TRadioButton; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function RadioButton_GetCaption(AObj: TRadioButton): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure RadioButton_SetCaption(AObj: TRadioButton; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function RadioButton_GetChecked(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.Checked;
end;

procedure RadioButton_SetChecked(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.Checked := AValue;
end;

function RadioButton_GetColor(AObj: TRadioButton): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure RadioButton_SetColor(AObj: TRadioButton; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function RadioButton_GetDoubleBuffered(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure RadioButton_SetDoubleBuffered(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function RadioButton_GetDragCursor(AObj: TRadioButton): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure RadioButton_SetDragCursor(AObj: TRadioButton; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function RadioButton_GetDragKind(AObj: TRadioButton): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure RadioButton_SetDragKind(AObj: TRadioButton; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function RadioButton_GetDragMode(AObj: TRadioButton): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure RadioButton_SetDragMode(AObj: TRadioButton; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function RadioButton_GetEnabled(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure RadioButton_SetEnabled(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function RadioButton_GetFont(AObj: TRadioButton): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure RadioButton_SetFont(AObj: TRadioButton; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function RadioButton_GetParentColor(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure RadioButton_SetParentColor(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function RadioButton_GetParentFont(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure RadioButton_SetParentFont(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function RadioButton_GetParentShowHint(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure RadioButton_SetParentShowHint(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function RadioButton_GetPopupMenu(AObj: TRadioButton): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure RadioButton_SetPopupMenu(AObj: TRadioButton; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function RadioButton_GetShowHint(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure RadioButton_SetShowHint(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function RadioButton_GetTabOrder(AObj: TRadioButton): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure RadioButton_SetTabOrder(AObj: TRadioButton; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function RadioButton_GetTabStop(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure RadioButton_SetTabStop(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function RadioButton_GetVisible(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure RadioButton_SetVisible(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure RadioButton_SetOnClick(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure RadioButton_SetOnContextPopup(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure RadioButton_SetOnDragDrop(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure RadioButton_SetOnDragOver(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure RadioButton_SetOnEndDrag(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure RadioButton_SetOnEnter(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure RadioButton_SetOnExit(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure RadioButton_SetOnKeyDown(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure RadioButton_SetOnKeyPress(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure RadioButton_SetOnKeyUp(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure RadioButton_SetOnMouseDown(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure RadioButton_SetOnMouseEnter(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure RadioButton_SetOnMouseLeave(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure RadioButton_SetOnMouseMove(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure RadioButton_SetOnMouseUp(AObj: TRadioButton; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

function RadioButton_GetDockClientCount(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function RadioButton_GetDockSite(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure RadioButton_SetDockSite(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function RadioButton_GetVisibleDockClientCount(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function RadioButton_GetBrush(AObj: TRadioButton): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function RadioButton_GetControlCount(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function RadioButton_GetHandle(AObj: TRadioButton): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function RadioButton_GetParentWindow(AObj: TRadioButton): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure RadioButton_SetParentWindow(AObj: TRadioButton; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function RadioButton_GetUseDockManager(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure RadioButton_SetUseDockManager(AObj: TRadioButton; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

procedure RadioButton_GetBoundsRect(AObj: TRadioButton; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure RadioButton_SetBoundsRect(AObj: TRadioButton; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function RadioButton_GetClientHeight(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure RadioButton_SetClientHeight(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure RadioButton_GetClientOrigin(AObj: TRadioButton; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure RadioButton_GetClientRect(AObj: TRadioButton; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function RadioButton_GetClientWidth(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure RadioButton_SetClientWidth(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function RadioButton_GetControlState(AObj: TRadioButton): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure RadioButton_SetControlState(AObj: TRadioButton; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function RadioButton_GetControlStyle(AObj: TRadioButton): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure RadioButton_SetControlStyle(AObj: TRadioButton; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function RadioButton_GetFloating(AObj: TRadioButton): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function RadioButton_GetParent(AObj: TRadioButton): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure RadioButton_SetParent(AObj: TRadioButton; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function RadioButton_GetLeft(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure RadioButton_SetLeft(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function RadioButton_GetTop(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure RadioButton_SetTop(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function RadioButton_GetWidth(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure RadioButton_SetWidth(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function RadioButton_GetHeight(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure RadioButton_SetHeight(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function RadioButton_GetCursor(AObj: TRadioButton): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure RadioButton_SetCursor(AObj: TRadioButton; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function RadioButton_GetHint(AObj: TRadioButton): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure RadioButton_SetHint(AObj: TRadioButton; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function RadioButton_GetComponentCount(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function RadioButton_GetComponentIndex(AObj: TRadioButton): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure RadioButton_SetComponentIndex(AObj: TRadioButton; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function RadioButton_GetOwner(AObj: TRadioButton): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function RadioButton_GetName(AObj: TRadioButton): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure RadioButton_SetName(AObj: TRadioButton; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function RadioButton_GetTag(AObj: TRadioButton): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure RadioButton_SetTag(AObj: TRadioButton; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function RadioButton_GetDockClients(AObj: TRadioButton; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function RadioButton_GetControls(AObj: TRadioButton; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function RadioButton_GetComponents(AObj: TRadioButton; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function RadioButton_StaticClassType: TClass; extdecl;
begin
  Result := TRadioButton;
end;

exports
  RadioButton_Create,
  RadioButton_Free,
  RadioButton_CanFocus,
  RadioButton_ContainsControl,
  RadioButton_ControlAtPos,
  RadioButton_DisableAlign,
  RadioButton_EnableAlign,
  RadioButton_FindChildControl,
  RadioButton_FlipChildren,
  RadioButton_Focused,
  RadioButton_HandleAllocated,
  RadioButton_InsertControl,
  RadioButton_Invalidate,
  RadioButton_RemoveControl,
  RadioButton_Realign,
  RadioButton_Repaint,
  RadioButton_ScaleBy,
  RadioButton_ScrollBy,
  RadioButton_SetBounds,
  RadioButton_SetFocus,
  RadioButton_Update,
  RadioButton_BringToFront,
  RadioButton_ClientToScreen,
  RadioButton_ClientToParent,
  RadioButton_Dragging,
  RadioButton_HasParent,
  RadioButton_Hide,
  RadioButton_Perform,
  RadioButton_Refresh,
  RadioButton_ScreenToClient,
  RadioButton_ParentToClient,
  RadioButton_SendToBack,
  RadioButton_Show,
  RadioButton_GetTextBuf,
  RadioButton_GetTextLen,
  RadioButton_SetTextBuf,
  RadioButton_FindComponent,
  RadioButton_GetNamePath,
  RadioButton_Assign,
  RadioButton_ClassType,
  RadioButton_ClassName,
  RadioButton_InstanceSize,
  RadioButton_InheritsFrom,
  RadioButton_Equals,
  RadioButton_GetHashCode,
  RadioButton_ToString,
  RadioButton_GetAction,
  RadioButton_SetAction,
  RadioButton_GetAlign,
  RadioButton_SetAlign,
  RadioButton_GetAlignment,
  RadioButton_SetAlignment,
  RadioButton_GetAnchors,
  RadioButton_SetAnchors,
  RadioButton_GetBiDiMode,
  RadioButton_SetBiDiMode,
  RadioButton_GetCaption,
  RadioButton_SetCaption,
  RadioButton_GetChecked,
  RadioButton_SetChecked,
  RadioButton_GetColor,
  RadioButton_SetColor,
  RadioButton_GetDoubleBuffered,
  RadioButton_SetDoubleBuffered,
  RadioButton_GetDragCursor,
  RadioButton_SetDragCursor,
  RadioButton_GetDragKind,
  RadioButton_SetDragKind,
  RadioButton_GetDragMode,
  RadioButton_SetDragMode,
  RadioButton_GetEnabled,
  RadioButton_SetEnabled,
  RadioButton_GetFont,
  RadioButton_SetFont,
  RadioButton_GetParentColor,
  RadioButton_SetParentColor,
  RadioButton_GetParentFont,
  RadioButton_SetParentFont,
  RadioButton_GetParentShowHint,
  RadioButton_SetParentShowHint,
  RadioButton_GetPopupMenu,
  RadioButton_SetPopupMenu,
  RadioButton_GetShowHint,
  RadioButton_SetShowHint,
  RadioButton_GetTabOrder,
  RadioButton_SetTabOrder,
  RadioButton_GetTabStop,
  RadioButton_SetTabStop,
  RadioButton_GetVisible,
  RadioButton_SetVisible,
  RadioButton_SetOnClick,
  RadioButton_SetOnContextPopup,
  RadioButton_SetOnDragDrop,
  RadioButton_SetOnDragOver,
  RadioButton_SetOnEndDrag,
  RadioButton_SetOnEnter,
  RadioButton_SetOnExit,
  RadioButton_SetOnKeyDown,
  RadioButton_SetOnKeyPress,
  RadioButton_SetOnKeyUp,
  RadioButton_SetOnMouseDown,
  RadioButton_SetOnMouseEnter,
  RadioButton_SetOnMouseLeave,
  RadioButton_SetOnMouseMove,
  RadioButton_SetOnMouseUp,
  RadioButton_GetDockClientCount,
  RadioButton_GetDockSite,
  RadioButton_SetDockSite,
  RadioButton_GetVisibleDockClientCount,
  RadioButton_GetBrush,
  RadioButton_GetControlCount,
  RadioButton_GetHandle,
  RadioButton_GetParentWindow,
  RadioButton_SetParentWindow,
  RadioButton_GetUseDockManager,
  RadioButton_SetUseDockManager,
  RadioButton_GetBoundsRect,
  RadioButton_SetBoundsRect,
  RadioButton_GetClientHeight,
  RadioButton_SetClientHeight,
  RadioButton_GetClientOrigin,
  RadioButton_GetClientRect,
  RadioButton_GetClientWidth,
  RadioButton_SetClientWidth,
  RadioButton_GetControlState,
  RadioButton_SetControlState,
  RadioButton_GetControlStyle,
  RadioButton_SetControlStyle,
  RadioButton_GetFloating,
  RadioButton_GetParent,
  RadioButton_SetParent,
  RadioButton_GetLeft,
  RadioButton_SetLeft,
  RadioButton_GetTop,
  RadioButton_SetTop,
  RadioButton_GetWidth,
  RadioButton_SetWidth,
  RadioButton_GetHeight,
  RadioButton_SetHeight,
  RadioButton_GetCursor,
  RadioButton_SetCursor,
  RadioButton_GetHint,
  RadioButton_SetHint,
  RadioButton_GetComponentCount,
  RadioButton_GetComponentIndex,
  RadioButton_SetComponentIndex,
  RadioButton_GetOwner,
  RadioButton_GetName,
  RadioButton_SetName,
  RadioButton_GetTag,
  RadioButton_SetTag,
  RadioButton_GetDockClients,
  RadioButton_GetControls,
  RadioButton_GetComponents,
  RadioButton_StaticClassType;

