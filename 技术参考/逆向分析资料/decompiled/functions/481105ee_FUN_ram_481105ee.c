/* Firmware entry: 0x481105ee */

bool FUN_ram_481105ee(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_50;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_50 = 0;
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
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar1 = FUN_ram_4811055a(param_1,&local_50);
  if ((iVar1 != 0) && (iVar1 = FUN_ram_4811055a(param_2,&uStack_30), iVar1 != 0)) {
    iVar1 = FUN_ram_4ff4511a(&local_50,&uStack_30,0x20);
    return iVar1 == 0;
  }
  return false;
}


