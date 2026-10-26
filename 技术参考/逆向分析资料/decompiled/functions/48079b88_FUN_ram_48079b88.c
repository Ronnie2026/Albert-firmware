/* Firmware entry: 0x48079b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48079b88(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 auStack_a4 [20];
  undefined8 uStack_90;
  undefined4 uStack_88;
  char local_84 [64];
  char acStack_44 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar9 = &DAT_ram_48223370;
  puVar8 = &local_a8;
  do {
    uVar10 = puVar9[1];
    uVar2 = puVar9[2];
    uVar6 = puVar9[3];
    uVar7 = puVar9[4];
    *puVar8 = *puVar9;
    puVar8[1] = uVar10;
    puVar8[2] = uVar2;
    puVar8[3] = uVar6;
    puVar8[4] = uVar7;
    puVar9 = puVar9 + 5;
    puVar8 = puVar8 + 5;
  } while (puVar9 != (undefined4 *)&DAT_ram_482233d4);
  *puVar8 = _DAT_ram_482233d4;
  uStack_b0 = 0;
  uStack_ac = 0;
  uVar2 = FUN_ram_48129c8a(param_1,"available");
  iVar3 = FUN_ram_48129d0c(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_ram_48129cb4(uVar2), iVar3 != 0)) {
    iVar3 = FUN_ram_48129ca2(uVar2);
    local_a8._0_1_ = iVar3 != 0;
    if (iVar3 == 0) {
      if (*(int **)(param_1 + 8) == (int *)0x0) {
        uStack_88 = 0;
      }
      else {
        uStack_88 = 0;
        uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
        if (**(int **)(param_1 + 8) != 0) {
          return 0;
        }
      }
LAB_ram_48079c20:
      FUN_ram_4ff45158(param_2,&local_a8,0x65);
      return 1;
    }
    iVar3 = FUN_ram_48079822(param_1,"epoch","device_revision",auStack_a4);
    if (iVar3 != 0) {
      iVar3 = FUN_ram_48129c8a(param_1,"backup_revision");
      iVar4 = FUN_ram_48129cd6();
      uVar6 = DAT_ram_481f4cbc;
      uVar2 = DAT_ram_481f4cb8;
      if (iVar4 != 0) {
        uVar12 = *(uint *)(iVar3 + 0x1c);
        uVar7 = *(undefined4 *)(iVar3 + 0x18);
        iVar3 = __unorddf2(uVar7,uVar12 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
        if ((((iVar3 == 0) && (iVar3 = __gtdf2(uVar7,uVar12 & 0x7fffffff,uVar2,uVar6), iVar3 < 1))
            && (iVar3 = __ltdf2(uVar7,uVar12,0,0), -1 < iVar3)) &&
           (iVar3 = __gtdf2(uVar7,uVar12,DAT_ram_481f4d20,DAT_ram_481f4d24), iVar3 < 1)) {
          uVar13 = FUN_ram_48196062(uVar7,uVar12);
          iVar3 = __nedf2(uVar7,uVar12,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
          if ((iVar3 == 0) && (uStack_90 = FUN_ram_48195bce(uVar7,uVar12), uStack_90 != 0)) {
            iVar3 = FUN_ram_48129c8a(param_1,"content_sha256");
            iVar4 = FUN_ram_48129ce8();
            if ((iVar4 != 0) && (pcVar11 = *(char **)(iVar3 + 0x10), pcVar11 != (char *)0x0)) {
              sVar5 = strlen(pcVar11);
              if (sVar5 < 0x41) {
                FUN_ram_4ff45158(local_84,pcVar11,sVar5 + 1);
                if (sVar5 == 0x40) {
                  pcVar11 = local_84;
                  do {
                    cVar1 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                    if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
                      return 0;
                    }
                  } while (acStack_44 != pcVar11);
                  uVar2 = FUN_ram_48129c8a(param_1,"stored_at_unix");
                  iVar3 = FUN_ram_480762ce(uVar2,0xffffffff,0,&uStack_b0);
                  uStack_88 = uStack_b0;
                  if (iVar3 != 0) goto LAB_ram_48079c20;
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


