/* Firmware entry: 0x4814797e */

char * FUN_ram_4814797e(undefined4 *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char local_18 [4];
  undefined4 local_14;
  byte abStack_10 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar5 = param_2;
  local_14 = *param_1;
  iVar2 = 0;
  pbVar4 = (byte *)&local_14;
  while( true ) {
    uVar6 = (uint)*pbVar4;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1 & 0xff;
      local_18[uVar8] = (char)uVar6 + (char)(uVar6 / 10) * -10 + '0';
      bVar1 = 9 < uVar6;
      uVar6 = uVar6 / 10;
    } while (bVar1);
    *pbVar4 = 0;
    iVar3 = iVar2;
    pcVar10 = param_2;
    if (uVar9 != 0) {
      pcVar7 = local_18 + uVar8;
      do {
        pcVar10 = param_2 + 1;
        iVar3 = iVar2 + 1;
        if (param_3 <= iVar2) {
          return (char *)0x0;
        }
        *param_2 = *pcVar7;
        bVar1 = local_18 != pcVar7;
        iVar2 = iVar3;
        pcVar7 = pcVar7 + -1;
        param_2 = pcVar10;
      } while (bVar1);
    }
    iVar2 = iVar3 + 1;
    if (param_3 <= iVar3) break;
    *pcVar10 = '.';
    pbVar4 = pbVar4 + 1;
    param_2 = pcVar10 + 1;
    if (pbVar4 == abStack_10) {
      *pcVar10 = '\0';
      return pcVar5;
    }
  }
  return (char *)0x0;
}


