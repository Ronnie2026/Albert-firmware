/* Firmware entry: 0x4807d16e */

/* WARNING: Removing unreachable block (ram,0x4807d572) */

int FUN_ram_4807d16e(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  byte local_2b0;
  byte abStack_2af [3];
  undefined4 auStack_2ac [15];
  undefined1 auStack_26f [65];
  undefined1 uStack_22e;
  ulonglong uStack_228;
  undefined1 uStack_220;
  undefined1 auStack_21c [500];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48129d0c();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar5 = FUN_ram_48129d0c(param_1);
  piVar16 = *(int **)(param_1 + 8);
  if (iVar5 == 0) goto joined_r0x4807d49a;
  piVar15 = piVar16;
  if (piVar16 != (int *)0x0) {
    while( true ) {
      iVar5 = piVar15[8];
      if (iVar5 == 0) {
        return 0;
      }
      piVar15 = (int *)*piVar15;
      piVar1 = piVar15;
      if (piVar15 == (int *)0x0) break;
      do {
        if ((piVar1[8] != 0) && (iVar6 = FUN_ram_4ff453ae(iVar5), iVar6 == 0)) {
          return 0;
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    do {
      iVar5 = FUN_ram_48129d0c(piVar16);
      if ((iVar5 != 0) || (iVar5 = FUN_ram_48129cfa(piVar16), iVar5 != 0)) {
        iVar5 = FUN_ram_48129d0c(piVar16);
        piVar15 = (int *)piVar16[2];
        if (iVar5 == 0) goto joined_r0x4807d506;
        piVar1 = piVar15;
        if (piVar15 != (int *)0x0) {
          while( true ) {
            iVar5 = piVar1[8];
            if (iVar5 == 0) {
              return 0;
            }
            piVar1 = (int *)*piVar1;
            piVar3 = piVar1;
            if (piVar1 == (int *)0x0) break;
            do {
              if ((piVar3[8] != 0) && (iVar6 = FUN_ram_4ff453ae(iVar5), iVar6 == 0)) {
                return 0;
              }
              piVar3 = (int *)*piVar3;
            } while (piVar3 != (int *)0x0);
          }
          do {
            iVar5 = FUN_ram_48129d0c(piVar15);
            if ((iVar5 != 0) || (iVar5 = FUN_ram_48129cfa(piVar15), iVar5 != 0)) {
              iVar5 = FUN_ram_48129d0c(piVar15);
              piVar1 = (int *)piVar15[2];
              if (iVar5 == 0) goto joined_r0x4807d208;
              piVar3 = piVar1;
              if (piVar1 != (int *)0x0) {
                while( true ) {
                  iVar5 = piVar3[8];
                  if (iVar5 == 0) {
                    return 0;
                  }
                  piVar3 = (int *)*piVar3;
                  piVar4 = piVar3;
                  if (piVar3 == (int *)0x0) break;
                  do {
                    if ((piVar4[8] != 0) && (iVar6 = FUN_ram_4ff453ae(iVar5), iVar6 == 0)) {
                      return 0;
                    }
                    piVar4 = (int *)*piVar4;
                  } while (piVar4 != (int *)0x0);
                }
                do {
                  iVar5 = FUN_ram_48129d0c(piVar1);
                  if (((iVar5 != 0) || (iVar5 = FUN_ram_48129cfa(piVar1), iVar5 != 0)) &&
                     (iVar5 = FUN_ram_4807c156(piVar1,3), iVar5 == 0)) {
                    return 0;
                  }
                  piVar1 = (int *)*piVar1;
joined_r0x4807d208:
                } while (piVar1 != (int *)0x0);
              }
            }
            piVar15 = (int *)*piVar15;
joined_r0x4807d506:
          } while (piVar15 != (int *)0x0);
        }
      }
      piVar16 = (int *)*piVar16;
joined_r0x4807d49a:
    } while (piVar16 != (int *)0x0);
  }
  puVar13 = &DAT_ram_482235c0;
  pbVar12 = &local_2b0;
  do {
    uVar7 = puVar13[1];
    uVar10 = puVar13[2];
    uVar11 = puVar13[3];
    *(undefined4 *)pbVar12 = *puVar13;
    *(undefined4 *)(pbVar12 + 4) = uVar7;
    *(undefined4 *)(pbVar12 + 8) = uVar10;
    *(undefined4 *)(pbVar12 + 0xc) = uVar11;
    puVar13 = puVar13 + 4;
    pbVar12 = pbVar12 + 0x10;
  } while (puVar13 != &DAT_ram_48223840);
  local_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  iVar5 = FUN_ram_48129c8a(param_1,"action_id");
  iVar6 = FUN_ram_48129ce8();
  if ((((iVar6 != 0) && (pcVar2 = *(char **)(iVar5 + 0x10), pcVar2 != (char *)0x0)) &&
      (sVar8 = strlen(pcVar2), sVar8 - 1 < 0x40)) &&
     (FUN_ram_4ff45158(&local_2b0,pcVar2,sVar8 + 1), local_2b0 != 0)) {
    pbVar12 = &local_2b0;
    do {
      pbVar12 = pbVar12 + 1;
      if (((0x19 < (byte)((local_2b0 & 0xdf) + 0xbf)) && (9 < (byte)(local_2b0 - 0x30))) &&
         ((local_2b0 != 0x5f && (1 < (byte)(local_2b0 - 0x2d))))) {
        return 0;
      }
      local_2b0 = *pbVar12;
    } while (local_2b0 != 0);
    iVar5 = FUN_ram_48129c8a(param_1,"action");
    iVar6 = FUN_ram_48129ce8();
    if (iVar6 == 0) {
      return 0;
    }
    pcVar2 = *(char **)(iVar5 + 0x10);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    sVar8 = strlen(pcVar2);
    if (0xe < sVar8 - 1) {
      return 0;
    }
    FUN_ram_4ff45158(&local_2c0,pcVar2,sVar8 + 1);
    iVar5 = FUN_ram_4807b94c(param_1,"boot_id",auStack_26f,0x41);
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = FUN_ram_48129c8a(param_1,"expires_at_unix");
    iVar9 = FUN_ram_48129cd6();
    if (iVar9 == 0) {
      return 0;
    }
    uVar7 = *(undefined4 *)(iVar6 + 0x18);
    uVar10 = *(undefined4 *)(iVar6 + 0x1c);
    iVar6 = __ltdf2(uVar7,uVar10,0,0);
    if (iVar6 < 0) {
      return 0;
    }
    iVar6 = __gtdf2(uVar7,uVar10,DAT_ram_481f4ce0,DAT_ram_481f4ce4);
    if (0 < iVar6) {
      return 0;
    }
    uVar17 = FUN_ram_48195bce(uVar7,uVar10);
    uVar18 = __floatundidf();
    iVar6 = __nedf2(uVar7,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    if (iVar6 != 0) {
      return 0;
    }
    if (uVar17 <= *(ulonglong *)(param_2 + 0xb8)) {
      return 0;
    }
    uVar14 = (uint)uVar17 - *(int *)(param_2 + 0xb8);
    if ((int)(uVar17 >> 0x20) - *(int *)(param_2 + 0xbc) != (uint)((uint)uVar17 < uVar14)) {
      return 0;
    }
    if (0x78 < uVar14) {
      return 0;
    }
    if (*(char *)(param_2 + 0x70) == '\0') {
      return 0;
    }
    iVar6 = FUN_ram_4ff453ae(auStack_26f,param_2 + 0x70);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_ram_4ff453ae(&local_2c0,"check");
    if (iVar6 == 0) {
      uStack_22e = 0;
      uVar7 = FUN_ram_48129c8a(param_1,"release");
      iVar6 = FUN_ram_48129cc4();
      if (iVar6 != 0) {
        iVar6 = 0;
        goto LAB_ram_4807d470;
      }
    }
    else {
      iVar6 = FUN_ram_4ff453ae(&local_2c0,"install");
      if (iVar6 != 0) {
        return 0;
      }
      uStack_22e = 1;
      uVar7 = FUN_ram_48129c8a(param_1,"release");
    }
    iVar6 = FUN_ram_4807c1fe(uVar7,param_2,auStack_21c);
    if (iVar6 != 0) {
LAB_ram_4807d470:
      uStack_220 = (undefined1)iVar6;
      uStack_228 = uVar17;
      FUN_ram_4ff45158(param_3,&local_2b0,0x27c);
      return iVar5;
    }
  }
  return 0;
}


