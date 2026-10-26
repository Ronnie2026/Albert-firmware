/* Firmware entry: 0x4817461e */

int FUN_ram_4817461e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -0x4e80;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_ram_4817fb86(auStack_68);
    FUN_ram_4817fb86(auStack_60);
    FUN_ram_4817fb86(auStack_58);
    puVar1 = auStack_50;
    do {
      FUN_ram_4817fb86(puVar1);
      puVar1 = puVar1 + 8;
    } while (puVar1 != auStack_30);
    iVar2 = FUN_ram_48172ee8(param_1,auStack_68,param_3,param_4,param_7);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_ram_48172ee8(param_1,param_2,param_5,param_6,param_7), iVar2 == 0)) &&
       (iVar2 = FUN_ram_481737ce(param_1,param_2,auStack_68,param_2,auStack_50), iVar2 == 0)) {
      iVar2 = FUN_ram_48173028(param_1,param_2);
    }
    puVar1 = auStack_50;
    do {
      FUN_ram_4817fb90(puVar1);
      puVar1 = puVar1 + 8;
    } while (puVar1 != auStack_30);
    FUN_ram_4817fb90(auStack_68);
    FUN_ram_4817fb90(auStack_60);
    FUN_ram_4817fb90(auStack_58);
    return iVar2;
  }
  return -0x4e80;
}


