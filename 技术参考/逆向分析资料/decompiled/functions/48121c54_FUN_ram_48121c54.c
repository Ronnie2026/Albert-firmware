/* Firmware entry: 0x48121c54 */

int FUN_ram_48121c54(byte *param_1,int param_2,char *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar8 = *param_4;
  bVar1 = *(byte *)(param_4 + 1);
  uVar10 = (uint)bVar1;
  pbVar6 = param_1 + param_2;
  if (iVar8 == 1) {
    if (param_1 != pbVar6) {
      uVar11 = (uint)*param_1;
      pbVar9 = param_1 + 1;
      uVar10 = (uint)(byte)(bVar1 | *param_1 >> 4);
      pcVar5 = param_3 + 1;
      pcVar4 = param_3;
      if (uVar10 < 0x40) goto LAB_ram_48121cb2;
      cVar7 = '=';
      goto LAB_ram_48121cb8;
    }
    iVar8 = 0;
  }
  else {
    if (iVar8 == 2) {
      if (param_1 != pbVar6) {
        bVar3 = *param_1;
        uVar11 = (uint)bVar3;
        param_1 = param_1 + 1;
        uVar10 = (uint)(byte)(bVar1 | bVar3 >> 6);
        pcVar5 = param_3;
        if (uVar10 < 0x40) goto LAB_ram_48121cd4;
        cVar7 = '=';
        goto LAB_ram_48121ce2;
      }
      iVar8 = 0;
LAB_ram_48121d5e:
      *(char *)(param_4 + 1) = (char)uVar10;
      *param_4 = 2;
      return iVar8;
    }
    pcVar4 = param_3;
    if (iVar8 != 0) {
      return 0;
    }
    while( true ) {
      if (param_1 == pbVar6) {
        *(char *)(param_4 + 1) = (char)uVar10;
        *param_4 = 0;
        return (int)pcVar4 - (int)param_3;
      }
      bVar1 = *param_1;
      *pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 >> 2];
      uVar10 = (bVar1 & 3) << 4;
      if (pbVar6 == param_1 + 1) break;
      uVar11 = (uint)param_1[1];
      pcVar5 = pcVar4 + 2;
      pbVar9 = param_1 + 2;
      uVar10 = uVar10 | param_1[1] >> 4;
      pcVar4 = pcVar4 + 1;
LAB_ram_48121cb2:
      cVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar10];
LAB_ram_48121cb8:
      *pcVar4 = cVar7;
      uVar10 = (uVar11 & 0xf) << 2;
      if (pbVar6 == pbVar9) {
        iVar8 = (int)pcVar5 - (int)param_3;
        goto LAB_ram_48121d5e;
      }
      uVar11 = (uint)*pbVar9;
      param_1 = pbVar9 + 1;
      uVar10 = uVar10 | *pbVar9 >> 6;
LAB_ram_48121cd4:
      cVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar10];
LAB_ram_48121ce2:
      uVar10 = uVar11 & 0x3f;
      cVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar10];
      *pcVar5 = cVar7;
      pcVar5[1] = cVar2;
      pcVar4 = pcVar5 + 2;
    }
    iVar8 = (int)(pcVar4 + 1) - (int)param_3;
  }
  *(char *)(param_4 + 1) = (char)uVar10;
  *param_4 = 1;
  return iVar8;
}


