/* Firmware entry: 0x481518b2 */

uint FUN_ram_481518b2(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = (uint)param_1 & 1;
  uVar3 = 0;
  if (uVar5 != 0) {
    if ((int)param_2 < 1) {
      uVar3 = 0;
      goto LAB_ram_4815191e;
    }
    uVar1 = *param_1;
    param_2 = param_2 - 1;
    param_1 = (ushort *)((int)param_1 + 1);
    uVar3 = (uint)(byte)uVar1 << 8;
  }
  if ((int)param_2 < 2) {
    iVar4 = 0;
  }
  else {
    puVar2 = (ushort *)((int)param_1 + (param_2 - 2 & 0xfffffffe) + 2);
    iVar4 = 0;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + (uint)uVar1;
    } while (param_1 != puVar2);
    param_2 = (param_2 - 2) - ((param_2 & 0xfffffffe) - 2);
  }
  if (param_2 == 1) {
    uVar3 = uVar3 | (byte)*param_1;
  }
  uVar3 = (uVar3 + iVar4 >> 0x10) + (uVar3 + iVar4 & 0xffff);
  uVar3 = (uVar3 >> 0x10) + (uVar3 & 0xffff);
  if (uVar5 == 0) {
    return uVar3 & 0xffff;
  }
LAB_ram_4815191e:
  return uVar3 >> 8 & 0xff | (uVar3 & 0xff) << 8;
}


