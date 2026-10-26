/* Firmware entry: 0x48151abc */

uint FUN_ram_48151abc(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffff;
  }
  bVar2 = false;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)((int)param_1 + 10);
    iVar4 = FUN_ram_481518b2(param_1[1],uVar1);
    uVar3 = (iVar4 + uVar3 & 0xffff) + (iVar4 + uVar3 >> 0x10);
    if ((uVar1 & 1) != 0) {
      bVar2 = (bool)(bVar2 ^ 1);
      uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
    }
    param_1 = (int *)*param_1;
  } while (param_1 != (int *)0x0);
  if (bVar2) {
    return ~((uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff) & 0xffff;
  }
  return ~uVar3 & 0xffff;
}


