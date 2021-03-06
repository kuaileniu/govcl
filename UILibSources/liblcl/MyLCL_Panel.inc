
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Panel_Create(AOwner: TComponent): TPanel; extdecl;
begin
  Result :=  TPanel.Create(AOwner);
end;

procedure Panel_Free(AObj: TPanel); extdecl;
begin
  AObj.Free;
end;

function Panel_CanFocus(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function Panel_ContainsControl(AObj: TPanel; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function Panel_ControlAtPos(AObj: TPanel; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure Panel_DisableAlign(AObj: TPanel); extdecl;
begin
  AObj.DisableAlign;
end;

procedure Panel_EnableAlign(AObj: TPanel); extdecl;
begin
  AObj.EnableAlign;
end;

function Panel_FindChildControl(AObj: TPanel; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure Panel_FlipChildren(AObj: TPanel; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Panel_Focused(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function Panel_HandleAllocated(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Panel_InsertControl(AObj: TPanel; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure Panel_Invalidate(AObj: TPanel); extdecl;
begin
  AObj.Invalidate;
end;

procedure Panel_RemoveControl(AObj: TPanel; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure Panel_Realign(AObj: TPanel); extdecl;
begin
  AObj.Realign;
end;

procedure Panel_Repaint(AObj: TPanel); extdecl;
begin
  AObj.Repaint;
end;

procedure Panel_ScaleBy(AObj: TPanel; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Panel_ScrollBy(AObj: TPanel; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure Panel_SetBounds(AObj: TPanel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Panel_SetFocus(AObj: TPanel); extdecl;
begin
  AObj.SetFocus;
end;

procedure Panel_Update(AObj: TPanel); extdecl;
begin
  AObj.Update;
end;

procedure Panel_BringToFront(AObj: TPanel); extdecl;
begin
  AObj.BringToFront;
end;

procedure Panel_ClientToScreen(AObj: TPanel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Panel_ClientToParent(AObj: TPanel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Panel_Dragging(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function Panel_HasParent(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Panel_Hide(AObj: TPanel); extdecl;
begin
  AObj.Hide;
end;

function Panel_Perform(AObj: TPanel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Panel_Refresh(AObj: TPanel); extdecl;
begin
  AObj.Refresh;
end;

procedure Panel_ScreenToClient(AObj: TPanel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Panel_ParentToClient(AObj: TPanel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Panel_SendToBack(AObj: TPanel); extdecl;
begin
  AObj.SendToBack;
end;

procedure Panel_Show(AObj: TPanel); extdecl;
begin
  AObj.Show;
end;

function Panel_GetTextBuf(AObj: TPanel; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Panel_GetTextLen(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure Panel_SetTextBuf(AObj: TPanel; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function Panel_FindComponent(AObj: TPanel; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Panel_GetNamePath(AObj: TPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Panel_Assign(AObj: TPanel; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function Panel_ClassType(AObj: TPanel): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Panel_ClassName(AObj: TPanel): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Panel_InstanceSize(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Panel_InheritsFrom(AObj: TPanel; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Panel_Equals(AObj: TPanel; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Panel_GetHashCode(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Panel_ToString(AObj: TPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Panel_GetAlign(AObj: TPanel): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure Panel_SetAlign(AObj: TPanel; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function Panel_GetAlignment(AObj: TPanel): TAlignment; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure Panel_SetAlignment(AObj: TPanel; AValue: TAlignment); extdecl;
begin
  AObj.Alignment := AValue;
end;

function Panel_GetAnchors(AObj: TPanel): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Panel_SetAnchors(AObj: TPanel; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function Panel_GetAutoSize(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Panel_SetAutoSize(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function Panel_GetBevelInner(AObj: TPanel): TBevelCut; extdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure Panel_SetBevelInner(AObj: TPanel; AValue: TBevelCut); extdecl;
begin
  AObj.BevelInner := AValue;
end;

function Panel_GetBevelOuter(AObj: TPanel): TBevelCut; extdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure Panel_SetBevelOuter(AObj: TPanel; AValue: TBevelCut); extdecl;
begin
  AObj.BevelOuter := AValue;
end;

function Panel_GetBiDiMode(AObj: TPanel): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Panel_SetBiDiMode(AObj: TPanel; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Panel_GetBorderWidth(AObj: TPanel): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure Panel_SetBorderWidth(AObj: TPanel; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function Panel_GetBorderStyle(AObj: TPanel): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Panel_SetBorderStyle(AObj: TPanel; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Panel_GetCaption(AObj: TPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure Panel_SetCaption(AObj: TPanel; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function Panel_GetColor(AObj: TPanel): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure Panel_SetColor(AObj: TPanel; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function Panel_GetUseDockManager(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure Panel_SetUseDockManager(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function Panel_GetDockSite(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure Panel_SetDockSite(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function Panel_GetDoubleBuffered(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Panel_SetDoubleBuffered(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Panel_GetDragCursor(AObj: TPanel): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure Panel_SetDragCursor(AObj: TPanel; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function Panel_GetDragKind(AObj: TPanel): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure Panel_SetDragKind(AObj: TPanel; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function Panel_GetDragMode(AObj: TPanel): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure Panel_SetDragMode(AObj: TPanel; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function Panel_GetEnabled(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Panel_SetEnabled(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function Panel_GetFullRepaint(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.FullRepaint;
end;

procedure Panel_SetFullRepaint(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.FullRepaint := AValue;
end;

function Panel_GetFont(AObj: TPanel): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure Panel_SetFont(AObj: TPanel; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function Panel_GetParentColor(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Panel_SetParentColor(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function Panel_GetParentFont(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Panel_SetParentFont(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function Panel_GetParentShowHint(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Panel_SetParentShowHint(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Panel_GetPopupMenu(AObj: TPanel): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Panel_SetPopupMenu(AObj: TPanel; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Panel_GetShowHint(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Panel_SetShowHint(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function Panel_GetTabOrder(AObj: TPanel): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Panel_SetTabOrder(AObj: TPanel; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function Panel_GetTabStop(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Panel_SetTabStop(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function Panel_GetVisible(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Panel_SetVisible(AObj: TPanel; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure Panel_SetOnClick(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure Panel_SetOnContextPopup(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure Panel_SetOnDockDrop(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDockDrop}
  {$DEFINE EventMethodName := OnDockDrop}
  EventMethodCode
end;

procedure Panel_SetOnDblClick(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure Panel_SetOnDragDrop(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure Panel_SetOnDragOver(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure Panel_SetOnEndDock(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure Panel_SetOnEndDrag(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure Panel_SetOnEnter(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure Panel_SetOnExit(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure Panel_SetOnGetSiteInfo(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetSiteInfo}
  {$DEFINE EventMethodName := OnGetSiteInfo}
  EventMethodCode
end;

procedure Panel_SetOnMouseDown(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure Panel_SetOnMouseEnter(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure Panel_SetOnMouseLeave(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure Panel_SetOnMouseMove(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure Panel_SetOnMouseUp(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure Panel_SetOnResize(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

procedure Panel_SetOnStartDock(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

procedure Panel_SetOnUnDock(AObj: TPanel; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnUnDock}
  {$DEFINE EventMethodName := OnUnDock}
  EventMethodCode
end;

function Panel_GetDockClientCount(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function Panel_GetVisibleDockClientCount(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function Panel_GetBrush(AObj: TPanel): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function Panel_GetControlCount(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Panel_GetHandle(AObj: TPanel): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function Panel_GetParentWindow(AObj: TPanel): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Panel_SetParentWindow(AObj: TPanel; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Panel_GetAction(AObj: TPanel): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure Panel_SetAction(AObj: TPanel; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure Panel_GetBoundsRect(AObj: TPanel; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Panel_SetBoundsRect(AObj: TPanel; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Panel_GetClientHeight(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Panel_SetClientHeight(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Panel_GetClientOrigin(AObj: TPanel; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure Panel_GetClientRect(AObj: TPanel; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Panel_GetClientWidth(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Panel_SetClientWidth(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Panel_GetControlState(AObj: TPanel): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure Panel_SetControlState(AObj: TPanel; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function Panel_GetControlStyle(AObj: TPanel): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure Panel_SetControlStyle(AObj: TPanel; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function Panel_GetFloating(AObj: TPanel): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function Panel_GetParent(AObj: TPanel): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Panel_SetParent(AObj: TPanel; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function Panel_GetLeft(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure Panel_SetLeft(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function Panel_GetTop(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure Panel_SetTop(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function Panel_GetWidth(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure Panel_SetWidth(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function Panel_GetHeight(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure Panel_SetHeight(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function Panel_GetCursor(AObj: TPanel): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Panel_SetCursor(AObj: TPanel; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function Panel_GetHint(AObj: TPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Panel_SetHint(AObj: TPanel; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function Panel_GetComponentCount(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Panel_GetComponentIndex(AObj: TPanel): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Panel_SetComponentIndex(AObj: TPanel; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Panel_GetOwner(AObj: TPanel): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function Panel_GetName(AObj: TPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Panel_SetName(AObj: TPanel; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function Panel_GetTag(AObj: TPanel): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Panel_SetTag(AObj: TPanel; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function Panel_GetDockClients(AObj: TPanel; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function Panel_GetControls(AObj: TPanel; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Panel_GetComponents(AObj: TPanel; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function Panel_StaticClassType: TClass; extdecl;
begin
  Result := TPanel;
end;

exports
  Panel_Create,
  Panel_Free,
  Panel_CanFocus,
  Panel_ContainsControl,
  Panel_ControlAtPos,
  Panel_DisableAlign,
  Panel_EnableAlign,
  Panel_FindChildControl,
  Panel_FlipChildren,
  Panel_Focused,
  Panel_HandleAllocated,
  Panel_InsertControl,
  Panel_Invalidate,
  Panel_RemoveControl,
  Panel_Realign,
  Panel_Repaint,
  Panel_ScaleBy,
  Panel_ScrollBy,
  Panel_SetBounds,
  Panel_SetFocus,
  Panel_Update,
  Panel_BringToFront,
  Panel_ClientToScreen,
  Panel_ClientToParent,
  Panel_Dragging,
  Panel_HasParent,
  Panel_Hide,
  Panel_Perform,
  Panel_Refresh,
  Panel_ScreenToClient,
  Panel_ParentToClient,
  Panel_SendToBack,
  Panel_Show,
  Panel_GetTextBuf,
  Panel_GetTextLen,
  Panel_SetTextBuf,
  Panel_FindComponent,
  Panel_GetNamePath,
  Panel_Assign,
  Panel_ClassType,
  Panel_ClassName,
  Panel_InstanceSize,
  Panel_InheritsFrom,
  Panel_Equals,
  Panel_GetHashCode,
  Panel_ToString,
  Panel_GetAlign,
  Panel_SetAlign,
  Panel_GetAlignment,
  Panel_SetAlignment,
  Panel_GetAnchors,
  Panel_SetAnchors,
  Panel_GetAutoSize,
  Panel_SetAutoSize,
  Panel_GetBevelInner,
  Panel_SetBevelInner,
  Panel_GetBevelOuter,
  Panel_SetBevelOuter,
  Panel_GetBiDiMode,
  Panel_SetBiDiMode,
  Panel_GetBorderWidth,
  Panel_SetBorderWidth,
  Panel_GetBorderStyle,
  Panel_SetBorderStyle,
  Panel_GetCaption,
  Panel_SetCaption,
  Panel_GetColor,
  Panel_SetColor,
  Panel_GetUseDockManager,
  Panel_SetUseDockManager,
  Panel_GetDockSite,
  Panel_SetDockSite,
  Panel_GetDoubleBuffered,
  Panel_SetDoubleBuffered,
  Panel_GetDragCursor,
  Panel_SetDragCursor,
  Panel_GetDragKind,
  Panel_SetDragKind,
  Panel_GetDragMode,
  Panel_SetDragMode,
  Panel_GetEnabled,
  Panel_SetEnabled,
  Panel_GetFullRepaint,
  Panel_SetFullRepaint,
  Panel_GetFont,
  Panel_SetFont,
  Panel_GetParentColor,
  Panel_SetParentColor,
  Panel_GetParentFont,
  Panel_SetParentFont,
  Panel_GetParentShowHint,
  Panel_SetParentShowHint,
  Panel_GetPopupMenu,
  Panel_SetPopupMenu,
  Panel_GetShowHint,
  Panel_SetShowHint,
  Panel_GetTabOrder,
  Panel_SetTabOrder,
  Panel_GetTabStop,
  Panel_SetTabStop,
  Panel_GetVisible,
  Panel_SetVisible,
  Panel_SetOnClick,
  Panel_SetOnContextPopup,
  Panel_SetOnDockDrop,
  Panel_SetOnDblClick,
  Panel_SetOnDragDrop,
  Panel_SetOnDragOver,
  Panel_SetOnEndDock,
  Panel_SetOnEndDrag,
  Panel_SetOnEnter,
  Panel_SetOnExit,
  Panel_SetOnGetSiteInfo,
  Panel_SetOnMouseDown,
  Panel_SetOnMouseEnter,
  Panel_SetOnMouseLeave,
  Panel_SetOnMouseMove,
  Panel_SetOnMouseUp,
  Panel_SetOnResize,
  Panel_SetOnStartDock,
  Panel_SetOnUnDock,
  Panel_GetDockClientCount,
  Panel_GetVisibleDockClientCount,
  Panel_GetBrush,
  Panel_GetControlCount,
  Panel_GetHandle,
  Panel_GetParentWindow,
  Panel_SetParentWindow,
  Panel_GetAction,
  Panel_SetAction,
  Panel_GetBoundsRect,
  Panel_SetBoundsRect,
  Panel_GetClientHeight,
  Panel_SetClientHeight,
  Panel_GetClientOrigin,
  Panel_GetClientRect,
  Panel_GetClientWidth,
  Panel_SetClientWidth,
  Panel_GetControlState,
  Panel_SetControlState,
  Panel_GetControlStyle,
  Panel_SetControlStyle,
  Panel_GetFloating,
  Panel_GetParent,
  Panel_SetParent,
  Panel_GetLeft,
  Panel_SetLeft,
  Panel_GetTop,
  Panel_SetTop,
  Panel_GetWidth,
  Panel_SetWidth,
  Panel_GetHeight,
  Panel_SetHeight,
  Panel_GetCursor,
  Panel_SetCursor,
  Panel_GetHint,
  Panel_SetHint,
  Panel_GetComponentCount,
  Panel_GetComponentIndex,
  Panel_SetComponentIndex,
  Panel_GetOwner,
  Panel_GetName,
  Panel_SetName,
  Panel_GetTag,
  Panel_SetTag,
  Panel_GetDockClients,
  Panel_GetControls,
  Panel_GetComponents,
  Panel_StaticClassType;

