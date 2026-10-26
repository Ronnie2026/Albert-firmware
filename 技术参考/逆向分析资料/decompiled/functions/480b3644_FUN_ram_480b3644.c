/* Firmware entry: 0x480b3644 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_480b3644(int *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char acStack_e8 [24];
  char acStack_d0 [24];
  char acStack_b8 [24];
  char acStack_a0 [28];
  char acStack_84 [64];
  char acStack_44 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_480b063e();
  iVar8 = DAT_ram_4ff6dcdc;
  if (iVar5 == 0) {
    return 0;
  }
  if (*(char *)(DAT_ram_4ff6dcdc + 0x41112) != '\0') {
    acStack_84[0] = '\0';
    iVar16 = FUN_ram_480b1222(DAT_ram_4ff6dcdc + 0x30,DAT_ram_4ff6dcdc + 0x22540,FUN_ram_480b356e,
                              acStack_84);
    if (iVar16 == 0) {
      *(undefined1 *)(iVar8 + 0x41111) = 0;
      *(char **)(iVar8 + 0x41114) = "outbox_full_or_invalid";
      return 0;
    }
    if ((acStack_84[0] != '\0') && (iVar8 = FUN_ram_480b0ed4(), iVar8 == 0)) {
      return 0;
    }
  }
  iVar8 = DAT_ram_4ff6dcdc;
  memset(param_2,0,0x484);
  if (*(short *)(iVar8 + 0x22530) != 0) {
    puVar9 = (undefined4 *)(iVar8 + 0x30);
    uVar10 = 0;
    do {
      uVar11 = *(uint *)(param_2 + 0x480);
      if (0xf < uVar11) break;
      if (*(char *)(puVar9 + 0x21) != '\0') {
        *(uint *)(param_2 + 0x480) = uVar11 + 1;
        puVar13 = (undefined4 *)(param_2 + uVar11 * 0x48);
        puVar12 = puVar9;
        do {
          uVar23 = puVar12[1];
          uVar22 = puVar12[2];
          uVar1 = puVar12[3];
          uVar15 = puVar12[4];
          uVar14 = puVar12[5];
          *puVar13 = *puVar12;
          puVar13[1] = uVar23;
          puVar13[2] = uVar22;
          puVar13[3] = uVar1;
          puVar13[4] = uVar15;
          puVar13[5] = uVar14;
          puVar12 = puVar12 + 6;
          puVar13 = puVar13 + 6;
        } while (puVar12 != puVar9 + 0x12);
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 0x22;
    } while (uVar10 < *(ushort *)(iVar8 + 0x22530));
  }
  if (((((char)param_1[10] != '\0') && (param_1[3] - 1U < 0xb)) &&
      (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) &&
     ((iVar16 = FUN_ram_4808c696(param_1,"pending_trips"), iVar16 != 0 &&
      ((char)param_1[10] != '\0')))) {
    uVar11 = param_1[2];
    if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
      *(undefined1 *)(*param_1 + uVar11) = 0x5b;
      iVar16 = param_1[2];
      param_1[2] = iVar16 + 1;
      *(undefined1 *)(iVar16 + 1 + *param_1) = 0;
      iVar16 = param_1[3];
      *(undefined1 *)((int)param_1 + iVar16 + 0x10) = 1;
      *(undefined1 *)((int)param_1 + iVar16 + 0x1c) = 0;
      param_1[3] = iVar16 + 1;
      goto LAB_ram_480b372a;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480b372a:
  if (*(int *)(param_2 + 0x480) == 0) {
LAB_ram_480b3aee:
    FUN_ram_4808c290(param_1);
    return iVar5;
  }
  puVar19 = param_2 + 0x28;
  uVar11 = 0;
  puVar21 = param_2;
LAB_ram_480b3750:
  uVar10 = *(ushort *)(iVar8 + 0x22530);
  if (uVar10 == 0) {
    return 0;
  }
  iVar16 = *(int *)(puVar19 + -0x18);
  iVar17 = *(int *)(puVar19 + -0x14);
  iVar20 = iVar8 + 0x30;
  uVar2 = 0;
  do {
    if (((*(int *)(iVar20 + 0x10) == iVar16) && (*(int *)(iVar20 + 0x14) == iVar17)) &&
       ((*(int *)(iVar20 + 0x18) == *(int *)(puVar19 + -0x10) &&
        ((*(int *)(iVar20 + 0x20) == *(int *)(puVar19 + -8) &&
         (*(int *)(iVar20 + 0x24) == *(int *)(puVar19 + -4))))))) {
      iVar6 = FUN_ram_4ff4511a(iVar20,puVar21,0xc);
      if ((iVar6 == 0) && (iVar6 = FUN_ram_4ff4511a(iVar20 + 0x28,puVar19,0x20), iVar6 == 0)) break;
    }
    uVar2 = uVar2 + 1;
    iVar20 = iVar20 + 0x88;
    if (uVar10 == uVar2) {
      return 0;
    }
  } while( true );
  if (*(char *)(uVar2 * 0x88 + iVar8 + 0xb4) == '\0') {
    return 0;
  }
  acStack_a0[0] = '\0';
  acStack_a0[1] = '\0';
  acStack_a0[2] = '\0';
  acStack_a0[3] = '\0';
  acStack_a0[4] = '\0';
  acStack_a0[5] = '\0';
  acStack_a0[6] = '\0';
  acStack_a0[7] = '\0';
  acStack_a0[8] = '\0';
  acStack_a0[9] = '\0';
  acStack_a0[10] = '\0';
  acStack_a0[0xb] = '\0';
  acStack_a0[0xc] = '\0';
  acStack_a0[0xd] = '\0';
  acStack_a0[0xe] = '\0';
  acStack_a0[0xf] = '\0';
  acStack_a0[0x10] = '\0';
  acStack_a0[0x11] = '\0';
  acStack_a0[0x12] = '\0';
  acStack_a0[0x13] = '\0';
  acStack_a0[0x14] = '\0';
  acStack_a0[0x15] = '\0';
  acStack_a0[0x16] = '\0';
  acStack_a0[0x17] = '\0';
  acStack_a0[0x18] = 0;
  acStack_e8[0] = '\0';
  acStack_e8[1] = '\0';
  acStack_e8[2] = '\0';
  acStack_e8[3] = '\0';
  acStack_e8[4] = '\0';
  acStack_e8[5] = '\0';
  acStack_e8[6] = '\0';
  acStack_e8[7] = '\0';
  acStack_e8[8] = '\0';
  acStack_e8[9] = '\0';
  acStack_e8[10] = '\0';
  acStack_e8[0xb] = '\0';
  acStack_e8[0xc] = '\0';
  acStack_e8[0xd] = '\0';
  acStack_e8[0xe] = '\0';
  acStack_e8[0xf] = '\0';
  acStack_e8[0x10] = '\0';
  acStack_e8[0x11] = '\0';
  acStack_e8[0x12] = '\0';
  acStack_e8[0x13] = '\0';
  acStack_e8[0x14] = 0;
  acStack_d0[0] = '\0';
  acStack_d0[1] = '\0';
  acStack_d0[2] = '\0';
  acStack_d0[3] = '\0';
  acStack_d0[4] = '\0';
  acStack_d0[5] = '\0';
  acStack_d0[6] = '\0';
  acStack_d0[7] = '\0';
  acStack_d0[8] = '\0';
  acStack_d0[9] = '\0';
  acStack_d0[10] = '\0';
  acStack_d0[0xb] = '\0';
  acStack_d0[0xc] = '\0';
  acStack_d0[0xd] = '\0';
  acStack_d0[0xe] = '\0';
  acStack_d0[0xf] = '\0';
  acStack_d0[0x10] = '\0';
  acStack_d0[0x11] = '\0';
  acStack_d0[0x12] = '\0';
  acStack_d0[0x13] = '\0';
  acStack_d0[0x14] = 0;
  acStack_b8[0] = '\0';
  acStack_b8[1] = '\0';
  acStack_b8[2] = '\0';
  acStack_b8[3] = '\0';
  acStack_b8[4] = '\0';
  acStack_b8[5] = '\0';
  acStack_b8[6] = '\0';
  acStack_b8[7] = '\0';
  acStack_b8[8] = '\0';
  acStack_b8[9] = '\0';
  acStack_b8[10] = '\0';
  acStack_b8[0xb] = '\0';
  acStack_b8[0xc] = '\0';
  acStack_b8[0xd] = '\0';
  acStack_b8[0xe] = '\0';
  acStack_b8[0xf] = '\0';
  acStack_b8[0x10] = '\0';
  acStack_b8[0x11] = '\0';
  acStack_b8[0x12] = '\0';
  acStack_b8[0x13] = '\0';
  acStack_b8[0x14] = 0;
  memset(acStack_84,0,0x41);
  pcVar4 = acStack_a0;
  puVar18 = puVar21;
  do {
    pcVar3 = pcVar4 + 2;
    FUN_ram_4819ad74(pcVar4,3,&DAT_ram_481c3b70,*puVar18);
    puVar18 = puVar18 + 1;
    pcVar4 = pcVar3;
  } while (acStack_a0 + 0x18 != pcVar3);
  FUN_ram_4819ad74(acStack_e8,0x15,&DAT_ram_481c48f4);
  FUN_ram_4819ad74(acStack_d0,0x15,&DAT_ram_481c48f4);
  FUN_ram_4819ad74(acStack_b8,0x15,&DAT_ram_481c48f4);
  pcVar4 = acStack_84;
  puVar18 = puVar19;
  do {
    pcVar3 = pcVar4 + 2;
    FUN_ram_4819ad74(pcVar4,3,&DAT_ram_481c3b70,*puVar18);
    puVar18 = puVar18 + 1;
    pcVar4 = pcVar3;
  } while (acStack_44 != pcVar3);
  FUN_ram_4808c1ae(param_1);
  sVar7 = strlen(acStack_a0);
  FUN_ram_4808c96e(param_1,"dataset_epoch",acStack_a0,sVar7);
  sVar7 = strlen(acStack_e8);
  FUN_ram_4808c96e(param_1,"wipe_epoch",acStack_e8,sVar7);
  sVar7 = strlen(acStack_d0);
  FUN_ram_4808c96e(param_1,"trip_id",acStack_d0,sVar7);
  sVar7 = strlen(acStack_b8);
  FUN_ram_4808c96e(param_1,"source_revision",acStack_b8,sVar7);
  sVar7 = strlen(acStack_84);
  FUN_ram_4808c96e(param_1,"content_sha256",acStack_84,sVar7);
  FUN_ram_4808c7bc(param_1,&DAT_ram_481ccbb4);
  FUN_ram_480b320a(param_1,iVar20 + 0x48);
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar2 = param_1[2];
    if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
      *(undefined1 *)(*param_1 + uVar2) = 0x7d;
      iVar16 = param_1[2];
      param_1[2] = iVar16 + 1;
      *(undefined1 *)(iVar16 + 1 + *param_1) = 0;
      iVar16 = param_1[3];
      uVar2 = iVar16 - 1;
      param_1[3] = uVar2;
      if (((char)param_1[10] != '\0') &&
         ((1 < uVar2 && (*(char *)((int)param_1 + iVar16 + 0x1a) != '\0')))) {
        uVar2 = param_1[2];
        if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
          *(undefined1 *)(*param_1 + uVar2) = 0x7d;
          iVar16 = param_1[2];
          param_1[2] = iVar16 + 1;
          *(undefined1 *)(iVar16 + 1 + *param_1) = 0;
          param_1[3] = param_1[3] + -1;
          goto LAB_ram_480b3ad0;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480b3ad0:
  uVar11 = uVar11 + 1;
  puVar19 = puVar19 + 0x48;
  puVar21 = puVar21 + 0x48;
  if (*(uint *)(param_2 + 0x480) <= uVar11) goto LAB_ram_480b3aee;
  goto LAB_ram_480b3750;
}


