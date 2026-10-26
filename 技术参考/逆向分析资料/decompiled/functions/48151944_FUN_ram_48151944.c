/* Firmware entry: 0x48151944 */

uint FUN_ram_48151944(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    bVar2 = false;
    do {
      uVar1 = *(ushort *)((int)param_1 + 10);
      iVar3 = FUN_ram_481518b2(param_1[1],uVar1);
      param_4 = (iVar3 + param_4 & 0xffff) + (iVar3 + param_4 >> 0x10);
      if ((uVar1 & 1) != 0) {
        bVar2 = (bool)(bVar2 ^ 1);
        param_4 = (param_4 & 0xff) << 8 | param_4 >> 8 & 0xff;
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
    if (bVar2) {
      param_4 = param_4 >> 8 & 0xff | (param_4 & 0xff) << 8;
    }
  }
  iVar3 = FUN_ram_48137fc8(param_2);
  iVar4 = FUN_ram_48137fc8(param_3);
  param_4 = iVar3 + iVar4 + param_4;
  uVar5 = (param_4 >> 0x10) + (param_4 & 0xffff);
  return ~((uVar5 >> 0x10) + (uVar5 & 0xffff)) & 0xffff;
}


