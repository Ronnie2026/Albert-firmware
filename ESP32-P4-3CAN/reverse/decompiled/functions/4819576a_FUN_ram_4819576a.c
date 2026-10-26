/* Firmware entry: 0x4819576a */

uint FUN_ram_4819576a(uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *extraout_a2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *extraout_a5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_481958a0();
  uVar4 = *param_1 + 0xbcd4d500;
  puVar3 = param_1 + -0xc;
  puVar2 = (uint *)*piVar1;
  if (((uint)(uVar4 < *param_1) + param_1[1] + 0xb8b1aabc == 0) && (uVar4 < 2)) {
    uVar4 = param_1[-7];
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    iVar5 = piVar1[1];
    param_1[-7] = uVar4 + 1;
    piVar1[1] = iVar5 + -1;
    if (puVar2 != puVar3) {
      param_1[-8] = (uint)puVar2;
      *piVar1 = (int)puVar3;
    }
    uVar4 = param_1[-2];
  }
  else {
    uVar4 = 0;
    if (puVar2 != (uint *)0x0) {
      uVar4 = FUN_ram_48195958();
      puVar3 = extraout_a2;
      piVar1 = extraout_a5;
    }
    *piVar1 = (int)puVar3;
  }
  return uVar4;
}


