/* Firmware entry: 0x4ff4318a */

void FUN_ram_4ff4318a(int *param_1,undefined1 *param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *param_3;
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)uVar4) {
    puVar2 = param_2;
    do {
      puVar1 = puVar2 + 1;
      *puVar2 = (char)*puVar3;
      puVar2 = puVar1;
    } while (param_2 + uVar4 != puVar1);
    return;
  }
  uVar4 = puVar3[7] & 0xff;
  if (puVar3 == (undefined4 *)0x50121000) {
    uVar4 = (int)uVar4 >> 3;
  }
  *param_3 = uVar4;
  if (uVar4 != 0) {
    puVar2 = param_2;
    do {
      puVar1 = puVar2 + 1;
      *puVar2 = (char)*puVar3;
      puVar2 = puVar1;
    } while (param_2 + uVar4 != puVar1);
  }
  return;
}


