/* Firmware entry: 0x4802c154 */

char * FUN_ram_4802c154(undefined4 param_1,undefined4 param_2,char *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xe < param_4 - 2) {
    *param_3 = '\0';
    return param_3;
  }
  uVar9 = (int)param_4 >> 0x1f;
  pcVar8 = param_3;
  do {
    pcVar7 = pcVar8;
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar2 = (uint)uVar10;
    uVar10 = __udivdi3(uVar2,uVar3,param_4,uVar9);
    iVar4 = __umoddi3(uVar2,uVar3,param_4,uVar9);
    pcVar8 = pcVar7 + 1;
    *pcVar7 = "0123456789abcdef"[iVar4];
    if (uVar3 < uVar9) break;
  } while ((uVar9 != uVar3) || (param_4 <= uVar2));
  pcVar5 = param_3;
  if (param_3 < pcVar7) {
    do {
      cVar1 = *pcVar7;
      pcVar6 = pcVar5 + 1;
      *pcVar7 = *pcVar5;
      *pcVar5 = cVar1;
      pcVar7 = pcVar7 + -1;
      pcVar5 = pcVar6;
    } while (pcVar6 < pcVar7);
  }
  *pcVar8 = '\0';
  return param_3;
}


