/* Firmware entry: 0x480c8fe6 */

void FUN_ram_480c8fe6(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *param_1;
  iVar2 = iVar5 + 0xb18;
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  cVar1 = *(char *)(iVar5 + 0xbd8);
  FUN_ram_4ff3ee10(iVar2);
  if (((cVar1 == '\0') && (*(char *)((int)param_1 + 0x246) != '\0')) &&
     (*(char *)((int)param_1 + 0x24b) == '\0')) {
    uVar4 = param_1[0x84];
    if ((uint)*(ushort *)(param_1 + 0x8f) * 100 <= uVar4) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x243);
      if (((int)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20) == 0) &&
         (uVar4 * uVar3 <=
          (uVar3 * 100 + (uint)*(byte *)(param_1 + 0x91)) * (uint)*(ushort *)(param_1 + 0x8f))) {
        if ((param_1[0xa8] != 0) && (500 < param_1[0xa8] - param_2)) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        param_2 = param_2 + 0x5dc;
        if (param_2 == 0) {
          param_2 = 1;
        }
        param_1[0xa8] = param_2;
        return;
      }
    }
  }
  param_1[0xa8] = 0;
  return;
}


