/* Firmware entry: 0x4ff262c4 */

void FUN_ram_4ff262c4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  undefined1 local_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  char cStack_18;
  byte bStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 auStack_10 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = local_38;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != auStack_10);
  cStack_18 = *(char *)((int)param_1 + 0xd);
  iStack_1c = *param_1;
  uStack_34 = cycle;
  bStack_17 = 0xff;
  if ((char)param_1[1] == '\b') {
    if (cStack_18 == '\x01') {
      if (iStack_1c == 0x3fd) {
        bStack_17 = *(byte *)((int)param_1 + 5) & 7;
      }
    }
    else if ((cStack_18 == '\x02') && (iStack_1c == 0x3c2)) {
      bStack_17 = *(byte *)((int)param_1 + 5) & 3;
    }
  }
  iStack_30 = param_1[4];
  if ((*(char *)((int)param_1 + 0xe) == '\0') && (iStack_30 == 0)) {
    uStack_16 = 0;
    iStack_28 = -1;
  }
  else {
    iStack_28 = param_2 - iStack_30;
    uStack_16 = 1;
  }
  iStack_2c = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  uStack_15 = param_5;
  uStack_14 = param_6;
  uStack_13 = param_7;
  FUN_ram_4ff2a97e(local_38);
  return;
}


