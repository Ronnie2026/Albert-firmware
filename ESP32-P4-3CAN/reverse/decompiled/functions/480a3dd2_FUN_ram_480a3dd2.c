/* Firmware entry: 0x480a3dd2 */

undefined4 FUN_ram_480a3dd2(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  bool local_b8;
  char acStack_b7 [24];
  char cStack_9f;
  undefined1 auStack_9e [70];
  uint uStack_58;
  uint uStack_54;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  bool abStack_40 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = &DAT_ram_48223b40;
  pbVar10 = &local_b8;
  do {
    uVar14 = puVar11[1];
    uVar3 = puVar11[2];
    uVar8 = puVar11[3];
    uVar9 = puVar11[4];
    *(undefined4 *)pbVar10 = *puVar11;
    *(undefined4 *)(pbVar10 + 4) = uVar14;
    *(undefined4 *)(pbVar10 + 8) = uVar3;
    *(undefined4 *)(pbVar10 + 0xc) = uVar8;
    *(undefined4 *)(pbVar10 + 0x10) = uVar9;
    puVar11 = puVar11 + 5;
    pbVar10 = pbVar10 + 0x14;
  } while (puVar11 != &DAT_ram_48223bb8);
  uStack_c0 = 0;
  uStack_bc = 0;
  local_b8 = SUB41(param_3,0);
  if (param_3 == 0) {
    uVar3 = FUN_ram_48129c8a(param_1,"available");
    iVar4 = FUN_ram_48129d0c(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_ram_48129cb4(uVar3);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_ram_48129ca2(uVar3);
    local_b8 = iVar4 != 0;
    if (iVar4 == 0) {
      if ((*(int **)(param_1 + 8) != (int *)0x0) && (**(int **)(param_1 + 8) != 0)) {
        return 0;
      }
      uVar3 = 0;
      uStack_44 = 0;
      goto LAB_ram_480a4046;
    }
  }
  iVar4 = FUN_ram_48129c8a(param_1,"dataset_epoch");
  iVar5 = FUN_ram_48129ce8();
  if ((((iVar5 != 0) && (pcVar16 = *(char **)(iVar4 + 0x10), pcVar16 != (char *)0x0)) &&
      (sVar6 = strlen(pcVar16), sVar6 < 0x19)) &&
     (FUN_ram_4ff45158(acStack_b7,pcVar16,sVar6 + 1), sVar6 == 0x18)) {
    pcVar16 = acStack_b7;
    do {
      cVar1 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
        return 0;
      }
    } while (&cStack_9f != pcVar16);
    iVar4 = FUN_ram_48129c8a(param_1,"wipe_epoch");
    iVar5 = FUN_ram_48129ce8();
    if (((iVar5 != 0) && (pbVar7 = *(byte **)(iVar4 + 0x10), pbVar7 != (byte *)0x0)) &&
       ((uVar17 = (uint)*pbVar7, uVar17 != 0 && ((uVar17 != 0x30 || (pbVar7[1] == 0)))))) {
      uStack_54 = 0;
      uVar15 = 0;
      do {
        uVar2 = uVar15 * 10 + uVar17;
        uVar17 = uVar17 - 0x30;
        uVar18 = ~uVar17;
        uVar13 = uVar18 + ~((int)uVar17 >> 0x1f);
        uVar13 = uVar13 + (uVar13 < uVar18);
        uStack_58 = uVar2 - 0x30;
        pbVar7 = pbVar7 + 1;
        if (9 < (uVar17 & 0xff)) {
          return 0;
        }
        uVar12 = uVar18 - (uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                                    uVar13 / 5));
        uVar17 = (~((int)uVar17 >> 0x1f) - (uint)(uVar18 < uVar12)) * -0x33333333 +
                 uVar12 * -0x33333334 + (int)((ulonglong)uVar12 * 0xcccccccd >> 0x20);
        uVar13 = uVar17 >> 1;
        if (uVar13 < uStack_54) {
          return 0;
        }
        if ((uStack_54 == uVar13) && ((uVar12 * -0x33333333 >> 1 | uVar17 * -0x80000000) < uVar15))
        {
          return 0;
        }
        uVar17 = (uint)*pbVar7;
        uStack_54 = (uint)(uStack_58 < uVar2) +
                    (((uint)(uVar15 * 5 < uVar15 * 4) +
                     (uStack_54 << 2 | uVar15 >> 0x1e) + uStack_54) * 2 | uVar15 * 5 >> 0x1f) +
                    (uint)(uVar2 < uVar15 * 10) + -1;
        uVar15 = uStack_58;
      } while (uVar17 != 0);
      iVar4 = FUN_ram_48129c8a(param_1,"revision");
      iVar5 = FUN_ram_48129cd6();
      uVar9 = DAT_ram_481f4cbc;
      uVar8 = DAT_ram_481f4cb8;
      if (iVar5 != 0) {
        uVar17 = *(uint *)(iVar4 + 0x1c);
        uVar3 = *(undefined4 *)(iVar4 + 0x18);
        iVar4 = __unorddf2(uVar3,uVar17 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
        if ((((iVar4 == 0) && (iVar4 = __gtdf2(uVar3,uVar17 & 0x7fffffff,uVar8,uVar9), iVar4 < 1))
            && (iVar4 = __ltdf2(uVar3,uVar17,0,0), -1 < iVar4)) &&
           (iVar4 = __gtdf2(uVar3,uVar17,DAT_ram_481f4ce0,DAT_ram_481f4ce4), iVar4 < 1)) {
          uVar19 = FUN_ram_48196062(uVar3,uVar17);
          iVar4 = __nedf2(uVar3,uVar17,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
          if (iVar4 == 0) {
            lVar20 = FUN_ram_48195bce(uVar3,uVar17);
            uVar3 = (undefined4)lVar20;
            if (lVar20 != 0) {
              iVar4 = FUN_ram_48129c8a(param_1,"checkpoint_revision");
              iVar5 = FUN_ram_48129cd6();
              if (iVar5 != 0) {
                uVar14 = *(undefined4 *)(iVar4 + 0x18);
                uVar17 = *(uint *)(iVar4 + 0x1c);
                iVar4 = __unorddf2(uVar14,uVar17 & 0x7fffffff,uVar8,uVar9);
                if (((iVar4 == 0) &&
                    (iVar4 = __gtdf2(uVar14,uVar17 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
                    iVar4 < 1)) &&
                   ((iVar4 = __ltdf2(uVar14,uVar17,0,0), -1 < iVar4 &&
                    (iVar4 = __gtdf2(uVar14,uVar17,DAT_ram_481f4d20,DAT_ram_481f4d24), iVar4 < 1))))
                {
                  uVar19 = FUN_ram_48196062(uVar14,uVar17);
                  iVar4 = __nedf2(uVar14,uVar17,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
                  if ((iVar4 == 0) && (lStack_50 = FUN_ram_48195bce(uVar14,uVar17), lStack_50 != 0))
                  {
                    uVar8 = FUN_ram_48129c8a(param_1,"snapshot_sha256");
                    iVar4 = FUN_ram_480a3d76(uVar8,auStack_9e);
                    if (iVar4 != 0) {
                      iVar4 = FUN_ram_4807927c(auStack_9e,0x40);
                      if (iVar4 != 0) {
                        uStack_44 = 0;
                        if (param_3 == 0) {
                          uVar8 = FUN_ram_48129c8a(param_1,"stored_at_unix");
                          iVar4 = FUN_ram_480762ce(uVar8,0xffffffff,0,&uStack_c0);
                          uStack_44 = uStack_c0;
                          if (iVar4 == 0) {
                            return 0;
                          }
                        }
LAB_ram_480a4046:
                        uStack_48 = uVar3;
                        pbVar10 = &local_b8;
                        do {
                          uVar3 = *(undefined4 *)pbVar10;
                          uVar8 = *(undefined4 *)(pbVar10 + 4);
                          uVar9 = *(undefined4 *)(pbVar10 + 8);
                          uVar14 = *(undefined4 *)(pbVar10 + 0xc);
                          param_2[4] = *(undefined4 *)(pbVar10 + 0x10);
                          *param_2 = uVar3;
                          param_2[1] = uVar8;
                          param_2[2] = uVar9;
                          param_2[3] = uVar14;
                          pbVar10 = pbVar10 + 0x14;
                          param_2 = param_2 + 5;
                        } while (pbVar10 != abStack_40);
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


