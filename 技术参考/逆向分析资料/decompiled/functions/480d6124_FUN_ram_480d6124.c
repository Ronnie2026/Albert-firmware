/* Firmware entry: 0x480d6124 */

undefined4 FUN_ram_480d6124(int *param_1,int param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char acStack_c4 [144];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(acStack_c4,0,0x81);
  if (param_3 != 0) {
    uVar7 = *param_4;
    uVar10 = 0;
    do {
      if (0x1fff < uVar7) {
        return 0;
      }
      uVar7 = param_3 - uVar10;
      if (0x40 < uVar7) {
        uVar7 = 0x40;
      }
      if (param_3 != uVar10) {
        pbVar5 = (byte *)(param_2 + uVar10);
        pbVar3 = pbVar5 + uVar7;
        pcVar4 = acStack_c4 + 1;
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          cVar2 = "0123456789abcdef"[bVar1 & 0xf];
          pcVar4[-1] = "0123456789abcdef"[bVar1 >> 4];
          *pcVar4 = cVar2;
          pcVar4 = pcVar4 + 2;
        } while (pbVar3 != pbVar5);
      }
      if ((((char)param_1[10] == '\0') || (iVar8 = param_1[3], 10 < iVar8 - 1U)) ||
         (*(char *)((int)param_1 + iVar8 + 0x1b) != '\0')) {
LAB_ram_480d6268:
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        if (*(char *)((int)param_1 + iVar8 + 0xf) == '\0') {
          uVar6 = param_1[2];
          if ((uVar6 <= (uint)param_1[1]) && (1 < param_1[1] - uVar6)) {
            *(undefined1 *)(*param_1 + uVar6) = 0x2c;
            iVar8 = param_1[2];
            param_1[2] = iVar8 + 1;
            *(undefined1 *)(iVar8 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_480d61da;
          }
          goto LAB_ram_480d6268;
        }
LAB_ram_480d61da:
        uVar6 = param_1[2];
        if (((uint)param_1[1] < uVar6) || (param_1[1] - uVar6 < 2)) goto LAB_ram_480d6268;
        *(undefined1 *)(*param_1 + uVar6) = 0x7b;
        iVar8 = param_1[2];
        param_1[2] = iVar8 + 1;
        *(undefined1 *)(iVar8 + 1 + *param_1) = 0;
        iVar8 = param_1[3];
        *(undefined1 *)((int)param_1 + iVar8 + 0xf) = 0;
        *(undefined1 *)((int)param_1 + iVar8 + 0x10) = 1;
        *(undefined1 *)((int)param_1 + iVar8 + 0x1c) = 1;
        param_1[3] = iVar8 + 1;
      }
      FUN_ram_4808c96e(param_1,&DAT_ram_481cefc4,acStack_c4,uVar7 << 1);
      uVar6 = param_1[2];
      uVar9 = param_1[1];
      if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
         (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) {
LAB_ram_480d629a:
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        if (uVar9 < uVar6) {
          *(undefined1 *)(param_1 + 10) = 0;
          return 0;
        }
        if (uVar9 - uVar6 < 2) goto LAB_ram_480d629a;
        *(undefined1 *)(*param_1 + uVar6) = 0x7d;
        iVar8 = param_1[2];
        param_1[2] = iVar8 + 1;
        *(undefined1 *)(iVar8 + 1 + *param_1) = 0;
        uVar9 = param_1[1];
        uVar6 = param_1[2];
        param_1[3] = param_1[3] + -1;
      }
      if ((uVar9 <= uVar6) || (uVar9 - 1 == uVar6)) {
        return 0;
      }
      uVar10 = uVar10 + uVar7;
      uVar7 = *param_4 + 1;
      *param_4 = uVar7;
    } while (uVar10 < param_3);
  }
  return 1;
}


