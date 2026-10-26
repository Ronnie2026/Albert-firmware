/* Firmware entry: 0x4811055a */

void FUN_ram_4811055a(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_40;
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
  local_40 = DAT_ram_48223dd0;
  uStack_3c = DAT_ram_48223dd4;
  uStack_38 = DAT_ram_48223dd8;
  uStack_34 = DAT_ram_48223ddc;
  uStack_30 = DAT_ram_48223de0;
  uStack_2c = DAT_ram_48223de4;
  uStack_28 = DAT_ram_48223de8;
  uStack_24 = DAT_ram_48223dec;
  uStack_20 = DAT_ram_48223df0;
  uStack_1c = DAT_ram_48223df4;
  uStack_18 = DAT_ram_48223df8;
  uStack_14 = DAT_ram_48223dfc;
  iVar1 = FUN_ram_4810f80c(&local_40,param_1);
  if (iVar1 != 0) {
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
    param_2[4] = uStack_30;
    param_2[5] = uStack_2c;
    param_2[6] = uStack_28;
    param_2[7] = uStack_24;
  }
  return;
}


