/* Firmware entry: 0x4804354e */

bool FUN_ram_4804354e(int param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0x325) != '\0') && (param_2[9] == *(int *)(param_1 + 0x34c))) {
    iVar14 = param_2[10];
    if (iVar14 != *(int *)(param_1 + 0x350)) {
      return false;
    }
    iVar15 = param_2[0xb];
    if ((((((iVar15 == *(int *)(param_1 + 0x354)) && (param_2[0xc] == *(int *)(param_1 + 0x358))) &&
          (iVar19 = param_2[0xd], iVar19 == *(int *)(param_1 + 0x35c))) &&
         (((param_2[0xe] == *(int *)(param_1 + 0x360) &&
           (iVar18 = param_2[0xf], iVar18 == *(int *)(param_1 + 0x364))) &&
          ((param_2[0x10] == *(int *)(param_1 + 0x368) &&
           ((*(char *)((int)param_2 + 0x51) == *(char *)(param_1 + 0x379) &&
            (param_2[0x11] == *(int *)(param_1 + 0x36c))))))))) &&
        (iVar16 = param_2[0x12], iVar16 == *(int *)(param_1 + 0x370))) &&
       ((((iVar17 = param_2[0x13], iVar17 == *(int *)(param_1 + 0x374) &&
          (cVar1 = (char)param_2[0x14], *(char *)(param_1 + 0x378) == cVar1)) &&
         (*param_2 == *(int *)(param_1 + 0x328))) &&
        (((char)param_2[1] == *(char *)(param_1 + 0x32c) &&
         (*(char *)((int)param_2 + 0xd) == *(char *)(param_1 + 0x335))))))) {
      pcVar8 = (char *)(param_1 + 0x32d);
      pcVar11 = (char *)((int)param_2 + 5);
      do {
        cVar2 = *pcVar11;
        cVar3 = *pcVar8;
        pcVar11 = pcVar11 + 1;
        pcVar8 = pcVar8 + 1;
        if (cVar2 != cVar3) {
          return false;
        }
      } while ((char *)((int)param_2 + 0xd) != pcVar11);
      bVar13 = false;
      if (((*(int *)(param_1 + 0x318) == param_2[9]) && (param_4 == iVar18)) &&
         ((*(int *)(param_1 + 800) == iVar18 && (*(int *)(param_1 + 0x31c) == param_2[0x10])))) {
        uVar9 = 0;
        if (*(char *)(param_1 + 2) != '\0') {
          uVar10 = 0;
          if ((*(char *)(param_1 + 0x124) != '\0') &&
             ((uint)(param_3 - *(int *)(param_1 + 0x128)) < 0x5dd)) {
            uVar10 = 1;
            if ((*(char *)(param_1 + 0x114) == '\0') &&
               (uVar10 = 0, *(char *)(param_1 + 0x115) != '\0')) {
              uVar10 = (uint)((uint)(param_3 - *(int *)(param_1 + 0x118)) <
                             (uint)*(ushort *)(param_1 + 6));
            }
            if ((*(char *)(param_1 + 0x11c) != '\0') ||
               ((*(char *)(param_1 + 0x11d) != '\0' &&
                ((uint)(param_3 - *(int *)(param_1 + 0x120)) < (uint)*(ushort *)(param_1 + 6))))) {
              uVar10 = uVar10 | 2;
            }
          }
          uVar12 = 0;
          uVar9 = 0;
          do {
            uVar5 = uVar12 & 0x1f;
            uVar6 = uVar12 & 0xf;
            uVar12 = uVar12 + 1;
            if ((*(byte *)(param_1 + 4) >> uVar5 & 1) != 0) {
              uVar9 = uVar10 << (uVar6 << 1) & 0xff | uVar9;
            }
          } while (uVar12 != 3);
        }
        bVar13 = false;
        if (*(byte *)((int)param_2 + 0x45) == uVar9) {
          bVar4 = *(byte *)((int)param_2 + 0x46);
          if (*(char *)(param_1 + 8) == '\0') {
            if (bVar4 != 0) {
              return false;
            }
            if (*(char *)((int)param_2 + 0x47) != '\0') {
              return false;
            }
            iVar7 = 0;
          }
          else {
            uVar9 = FUN_ram_480319ac(param_1,param_3);
            if (bVar4 != uVar9) {
              return false;
            }
            bVar4 = *(byte *)((int)param_2 + 0x47);
            uVar9 = FUN_ram_48031a00(param_1,param_3);
            if (bVar4 != uVar9) {
              return false;
            }
            iVar7 = FUN_ram_48032060(param_1,param_3);
          }
          bVar13 = false;
          if ((iVar7 == iVar16) && (*(int *)(param_1 + 0xd8) == iVar17)) {
            if (*(char *)(param_1 + 0xb4) == '\0') {
              if (cVar1 != '\0') {
                return false;
              }
            }
            else {
              if (*(char *)(param_1 + 0x4c) != cVar1) {
                return false;
              }
              if ((cVar1 != '\0') &&
                 (iVar16 = FUN_ram_480425e2(param_1 + 0x38,param_3,iVar18), iVar16 == 0)) {
                return false;
              }
            }
            bVar13 = false;
            if ((((*(char *)(param_1 + 0x2e8) != '\0') &&
                 (bVar13 = false, *(int *)(param_1 + 0x314) == iVar18)) &&
                ((uint)(param_3 - *(int *)(param_1 + 0x310)) < 0x5dd)) &&
               ((*(int *)(param_1 + 0x310) == iVar14 && (*(int *)(param_1 + 0x18c) == iVar15)))) {
              bVar13 = (uint)(param_3 - iVar19) < 0xb;
            }
          }
        }
      }
      return bVar13;
    }
  }
  return false;
}


