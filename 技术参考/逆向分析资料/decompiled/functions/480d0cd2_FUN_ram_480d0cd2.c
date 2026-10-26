/* Firmware entry: 0x480d0cd2 */

undefined4 FUN_ram_480d0cd2(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined4 ***apppuStack_5c [2];
  uint uStack_54;
  byte bStack_4d;
  undefined1 *puStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff453ae(param_1,"/health");
  puStack_4c = param_2;
  uStack_48 = param_3;
  if (iVar1 == 0) {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    puStack_24 = &sedeleg;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      puStack_24 = (undefined *)0x100;
    }
    else {
      *param_2 = 0;
    }
    uVar2 = FUN_ram_480c0f3c(&puStack_4c);
    return uVar2;
  }
  iVar1 = FUN_ram_4ff453ae(param_1,"/config");
  if (iVar1 == 0) {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    puStack_24 = &sedeleg;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      puStack_24 = (undefined *)0x100;
    }
    else {
      *param_2 = 0;
    }
    uVar2 = FUN_ram_480bb868(&puStack_4c);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return uVar2;
  }
  iVar1 = FUN_ram_4ff453ae(param_1,"/status");
  if (iVar1 == 0) {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    puStack_24 = (undefined *)0x1;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      puStack_24 = (undefined *)0x0;
    }
    else {
      *param_2 = 0;
    }
    uVar2 = FUN_ram_480be2be(&puStack_4c);
    return uVar2;
  }
  iVar1 = FUN_ram_4ff453ae(param_1,"/cloud/status");
  if (iVar1 == 0) {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    puStack_24 = (undefined *)0x1;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      puStack_24 = (undefined *)0x0;
    }
    else {
      *param_2 = 0;
    }
    uVar2 = FUN_ram_480cfa62(&puStack_4c);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return uVar2;
  }
  iVar1 = FUN_ram_4ff453ae(param_1,"/ota/online/status");
  if (iVar1 == 0) {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    puStack_24 = (undefined *)0x1;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      puStack_24 = (undefined *)0x0;
    }
    else {
      *param_2 = 0;
    }
    uVar2 = FUN_ram_480bd6c6(&puStack_4c);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return uVar2;
  }
  iVar1 = FUN_ram_4ff453ae(param_1,"/fsd_records");
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4802d110(DAT_ram_4ff6dcc8 + 0xa60);
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    puStack_24 = (undefined *)0x1;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      puStack_24 = (undefined *)0x0;
    }
    else {
      *param_2 = 0;
    }
    cVar4 = DAT_ram_4ff5c3dc._3_1_;
    if ((DAT_ram_4ff5c3dc._1_1_ == '\0') || (DAT_ram_4ff5be38 == '\0')) {
      bVar3 = false;
      if (DAT_ram_4ff5c3dc._3_1_ != '\0') goto LAB_ram_480d0f98;
      bVar3 = false;
      if (DAT_ram_4ff5c3dc._2_1_ != '\0') {
        bVar3 = false;
        cVar4 = DAT_ram_4ff5c3dc._2_1_;
        goto LAB_ram_480d0f98;
      }
    }
    else {
      bVar3 = false;
      if ((DAT_ram_4ff5c3dc._3_1_ != '\0') ||
         (cVar4 = DAT_ram_4ff5c3dc._2_1_, DAT_ram_4ff5c3dc._2_1_ != '\0')) goto LAB_ram_480d0f98;
      bVar3 = *(int *)(DAT_ram_4ff6dcc8 + 0xa60) == DAT_ram_4ff5c36c;
    }
    cVar4 = *(int *)(DAT_ram_4ff6dcc8 + 0xa60) != DAT_ram_4ff5c36c;
LAB_ram_480d0f98:
    uVar2 = FUN_ram_480b41ec(&puStack_4c,DAT_ram_4ff6dcc8 + 0xa60,DAT_ram_4ff5c3dc._1_1_,bVar3,cVar4
                             ,DAT_ram_4ff5c3e8);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return uVar2;
  }
  FUN_ram_4802a8a8(apppuStack_5c,&DAT_ram_481df390);
  iVar1 = FUN_ram_4ff453ae(param_1,"/status_fast");
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4802a79a(apppuStack_5c,0x200);
    if ((iVar1 != 0) && (iVar1 = FUN_ram_48039cfc(apppuStack_5c), iVar1 != 0)) {
LAB_ram_480d0ef8:
      if ((char)bStack_4d < '\0') {
        uStack_54 = bStack_4d & 0x7f;
        if (((bStack_4d & 0x7f) != 0) && (uStack_54 < param_3)) {
          apppuStack_5c[0] = apppuStack_5c;
          goto LAB_ram_480d0f0c;
        }
      }
      else if ((((undefined4 ****)apppuStack_5c[0] != (undefined4 ****)0x0) && (uStack_54 != 0)) &&
              (uStack_54 < param_3)) {
LAB_ram_480d0f0c:
        FUN_ram_4ff45158(param_2,apppuStack_5c[0],uStack_54 + 1);
        uVar2 = 1;
        goto LAB_ram_480d0f1a;
      }
    }
  }
  else {
    iVar1 = FUN_ram_4ff453ae(param_1,"/driver_profiles");
    if (iVar1 == 0) {
      if (DAT_ram_4ff6dd78 != '\0') {
        FUN_ram_48052ffe(&puStack_4c);
        goto LAB_ram_480d0eea;
      }
    }
    else {
      iVar1 = FUN_ram_4ff453ae(param_1,"/ambient_config");
      if (iVar1 == 0) {
        if (DAT_ram_4ff6dd4a != '\0') {
          uVar2 = FUN_ram_4802cf24();
          FUN_ram_4803c556(&puStack_4c,uVar2,0);
LAB_ram_480d0eea:
          FUN_ram_4802ad2c(apppuStack_5c,&puStack_4c);
          FUN_ram_4802a59e(&puStack_4c);
          goto LAB_ram_480d0ef8;
        }
      }
      else {
        iVar1 = FUN_ram_4ff453ae(param_1,"/rear_fog/config");
        if (iVar1 == 0) {
          FUN_ram_48054344(&puStack_4c);
          goto LAB_ram_480d0eea;
        }
      }
    }
  }
  uVar2 = 0;
LAB_ram_480d0f1a:
  FUN_ram_4802a59e(apppuStack_5c);
  return uVar2;
}


