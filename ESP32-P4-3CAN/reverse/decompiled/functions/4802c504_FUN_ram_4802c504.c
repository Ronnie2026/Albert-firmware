/* Firmware entry: 0x4802c504 */

void FUN_ram_4802c504(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
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
  uStack_3c = param_3[1];
  local_40 = *param_3;
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  uStack_30 = param_3[4];
  uStack_2c = param_3[5];
  uStack_28 = param_3[6];
  uStack_24 = param_3[7];
  uStack_20 = param_3[8];
  uStack_1c = param_3[9];
  uStack_18 = param_3[10];
  uStack_14 = param_3[0xb];
  (*(code *)*param_1)(*param_2,&local_40);
  return;
}


