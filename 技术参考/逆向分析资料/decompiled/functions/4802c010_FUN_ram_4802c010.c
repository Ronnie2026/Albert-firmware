/* Firmware entry: 0x4802c010 */

char * FUN_ram_4802c010(uint param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 - 2U < 0xf) {
    uVar8 = (int)param_2 >> 0x1f;
    uVar5 = (uVar8 ^ param_1) - uVar8;
    lVar11 = CONCAT44(((uVar8 ^ param_2) - uVar8) - (uint)((uVar8 ^ param_1) < uVar5),uVar5);
    pcVar10 = param_3;
    do {
      pcVar9 = pcVar10;
      uVar3 = (undefined4)((ulonglong)lVar11 >> 0x20);
      uVar2 = (undefined4)lVar11;
      lVar11 = __divdi3(uVar2,uVar3,param_4,param_4 >> 0x1f);
      iVar4 = __moddi3(uVar2,uVar3,param_4,param_4 >> 0x1f);
      *pcVar9 = "0123456789abcdef"[iVar4];
      pcVar10 = pcVar9 + 1;
    } while (lVar11 != 0);
    pcVar7 = pcVar10;
    if ((int)param_2 < 0) {
      pcVar7 = pcVar9 + 2;
      *pcVar10 = '-';
      pcVar9 = pcVar10;
    }
    pcVar10 = param_3;
    if (param_3 < pcVar9) {
      do {
        cVar1 = *pcVar9;
        pcVar6 = pcVar10 + 1;
        *pcVar9 = *pcVar10;
        *pcVar10 = cVar1;
        pcVar9 = pcVar9 + -1;
        pcVar10 = pcVar6;
      } while (pcVar6 < pcVar9);
    }
    *pcVar7 = '\0';
    return param_3;
  }
  *param_3 = '\0';
  return param_3;
}


