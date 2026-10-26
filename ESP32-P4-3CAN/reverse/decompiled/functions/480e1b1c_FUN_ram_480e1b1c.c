/* Firmware entry: 0x480e1b1c */

void FUN_ram_480e1b1c(int param_1,int *param_2,uint param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4 [27];
  char cStack_56;
  byte bStack_55;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar4 + 0xb18,0xffffffff);
  puVar14 = (undefined4 *)(iVar4 + 0xb38);
  puVar13 = local_c4;
  do {
    uVar7 = puVar14[1];
    uVar9 = puVar14[2];
    uVar11 = puVar14[3];
    *puVar13 = *puVar14;
    puVar13[1] = uVar7;
    puVar13[2] = uVar9;
    puVar13[3] = uVar11;
    puVar14 = puVar14 + 4;
    puVar13 = puVar13 + 4;
  } while (puVar14 != (undefined4 *)(iVar4 + 0xbd8));
  *puVar13 = *puVar14;
  FUN_ram_4ff3ee10(iVar4 + 0xb18);
  if (bStack_55 == param_3) {
    iVar4 = *param_2;
    if (iVar4 - 0x4e2U < 2) {
      uStack_cc = 0;
      uStack_c8 = 0;
      iVar6 = FUN_ram_4805625c((int)param_2 + 5,(char)param_2[1],&uStack_cc);
      uVar9 = uStack_c8;
      uVar7 = uStack_cc;
      if (iVar6 != 0) {
        uVar5 = (uint)(iVar4 != 0x4e2);
        FUN_ram_4ff3ec14(param_1 + 0x78,0xffffffff);
        iVar4 = (uVar5 + 400) * 8 + param_1;
        *(undefined4 *)(iVar4 + 0xc) = uVar9;
        *(undefined4 *)(iVar4 + 8) = uVar7;
        *(undefined1 *)(param_1 + uVar5 + 0xc98) = 1;
        *(int *)((uVar5 + 0x324) * 4 + param_1 + 0xc) = param_4;
        FUN_ram_4ff3ee10(param_1 + 0x78);
        return;
      }
    }
    else if ((((cStack_56 != '\0') || (*(char *)(param_1 + 0xd68) != '\0')) ||
             (*(int *)(param_1 + 0xd6c) != 0)) &&
            ((iVar4 == 0x4f3 && ((byte)((char)param_2[1] - 3U) < 2)))) {
      if ((((*(int *)(param_1 + 0xdc8) == 0) ||
           ((*(char *)((int)param_2 + 0xd) != *(char *)(param_1 + 0xdb1) ||
            (100 < (uint)(param_4 - *(int *)(param_1 + 0xdc8)))))) ||
          (*(char *)(param_1 + 0xda8) != (char)param_2[1])) ||
         (iVar4 = FUN_ram_4ff4511a((int)param_2 + 5,param_1 + 0xda9), iVar4 != 0)) {
        iVar12 = param_2[7];
        iVar17 = *param_2;
        iVar4 = param_2[1];
        iVar16 = param_2[2];
        iVar15 = param_2[3];
        iVar6 = param_2[4];
        iVar8 = param_2[5];
        iVar10 = param_2[6];
        *(int *)(param_1 + 0xd50) = param_2[8];
        *(int *)(param_1 + 0xd30) = iVar17;
        *(int *)(param_1 + 0xd34) = iVar4;
        *(int *)(param_1 + 0xd38) = iVar16;
        *(int *)(param_1 + 0xd3c) = iVar15;
        *(int *)(param_1 + 0xd40) = iVar6;
        *(int *)(param_1 + 0xd44) = iVar8;
        *(int *)(param_1 + 0xd48) = iVar10;
        *(int *)(param_1 + 0xd4c) = iVar12;
        *(int *)(param_1 + 0xd54) = param_4;
        if (*(byte *)(param_2 + 1) < 3) {
          *(undefined1 *)(param_1 + 0xd58) = 0;
        }
        else {
          cVar1 = *(char *)((int)param_2 + 6);
          cVar2 = *(char *)((int)param_2 + 7);
          cVar3 = *(char *)((int)param_2 + 5);
          *(bool *)(param_1 + 0xd58) = (cVar1 != '\0' || cVar2 != '\0') || cVar3 != '\0';
          if ((cVar1 != '\0' || cVar2 != '\0') || cVar3 != '\0') {
            FUN_ram_480df148(param_1,0);
            return;
          }
        }
      }
    }
  }
  return;
}


