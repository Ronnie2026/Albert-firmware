/* Firmware entry: 0x48121520 */

void FUN_ram_48121520(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815882a();
  iVar3 = FUN_ram_48137f44();
  if (iVar3 != 0) {
    FUN_ram_48137efc();
  }
  FUN_ram_48137f52(0);
  FUN_ram_48137fbc(0,param_3);
  FUN_ram_48137fbc(1,param_4);
  FUN_ram_48137fbc(2,param_5);
  FUN_ram_48137e2a();
  param_1 = -param_1;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  iVar3 = param_1 / 0xe10;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_64 = 0x545344;
  if (param_1 == iVar3 * 0xe10) {
    FUN_ram_4819ad74(&uStack_7c,0x15,"UTC%ld",iVar3);
  }
  else {
    uVar2 = param_1 % 0x3c >> 0x1f;
    uVar1 = (param_1 % 0xe10) / 0x3c;
    uVar4 = (int)uVar1 >> 0x1f;
    FUN_ram_4819ad74(&uStack_7c,0x15,"UTC%ld:%02u:%02u",iVar3,(uVar4 ^ uVar1) - uVar4,
                     (uVar2 ^ param_1 % 0x3c) - uVar2);
  }
  if (param_2 != 0xe10) {
    param_1 = param_1 - param_2;
    iVar3 = param_1 / 0xe10;
    if (param_1 == iVar3 * 0xe10) {
      FUN_ram_4819ad74(&uStack_64,0x15,"DST%ld",iVar3);
    }
    else {
      uVar4 = param_1 % 0x3c >> 0x1f;
      uVar1 = (param_1 % 0xe10) / 0x3c;
      uVar2 = (int)uVar1 >> 0x1f;
      FUN_ram_4819ad74(&uStack_64,0x15,"DST%ld:%02u:%02u",iVar3,(uVar2 ^ uVar1) - uVar2,
                       (param_1 % 0x3c ^ uVar4) - uVar4);
    }
  }
  FUN_ram_4819ad74(&uStack_4c,0x29,&DAT_ram_481d1bc4,&uStack_7c,&uStack_64);
  FUN_ram_481974ac(&DAT_ram_481d1bcc,&uStack_4c,1);
  FUN_ram_4819b900();
  return;
}


