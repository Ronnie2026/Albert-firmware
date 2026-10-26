/* Firmware entry: 0x4802dbd6 */

void FUN_ram_4802dbd6(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  byte bStack_12;
  undefined1 uStack_11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_3c = *param_1;
  uStack_38 = param_1[1];
  uStack_34 = param_1[2];
  uStack_30 = param_1[3];
  iStack_2c = param_1[4];
  uStack_28 = param_1[5];
  uStack_24 = param_1[6];
  uStack_20 = param_1[7];
  uStack_1c = param_1[8];
  uStack_14 = (undefined1)param_2;
  uStack_11 = 0;
  uStack_13 = param_3;
  if (param_2 == 0) {
    bStack_12 = iStack_2c != 0 | *(byte *)((int)param_1 + 0xe);
    iStack_18 = iStack_2c;
    FUN_ram_4802db7a(&uStack_3c);
    return;
  }
  bStack_12 = 0;
  iStack_18 = 0;
  FUN_ram_4802db7a(&uStack_3c);
  return;
}


