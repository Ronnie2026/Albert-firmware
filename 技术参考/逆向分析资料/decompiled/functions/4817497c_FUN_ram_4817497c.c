/* Firmware entry: 0x4817497c */

int FUN_ram_4817497c(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                    undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  int local_7c [7];
  undefined1 auStack_60 [4];
  short sStack_5c;
  undefined1 auStack_58 [4];
  short sStack_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  short sStack_44;
  undefined1 auStack_40 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_481748fc(param_1,param_3);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_4817dc1e(param_1,param_4);
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -0x4f80;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_ram_4817fb86(local_7c);
    FUN_ram_4817fb86(local_7c + 2);
    FUN_ram_4817fb86(local_7c + 4);
    puVar2 = auStack_60;
    FUN_ram_4817fb86(auStack_8c);
    puVar13 = puVar2;
    do {
      FUN_ram_4817fb86(puVar13);
      puVar13 = puVar13 + 8;
    } while (puVar13 != auStack_40);
    if (param_5 == 0) {
      return -0x4f80;
    }
    iVar5 = FUN_ram_4817fe72(auStack_8c,param_4);
    if ((((iVar5 == 0) && (iVar5 = FUN_ram_4817fe72(local_7c,param_4), iVar5 == 0)) &&
        (iVar5 = FUN_ram_4817fe72(local_7c + 2,param_4 + 8), iVar5 == 0)) &&
       ((iVar5 = FUN_ram_4817fe72(local_7c + 4,param_4 + 0x10), iVar5 == 0 &&
        (iVar5 = FUN_ram_4817ff24(param_2,1), iVar5 == 0)))) {
      iVar6 = param_2 + 0x10;
      iVar5 = FUN_ram_4817ff24(iVar6,0);
      if (iVar5 == 0) {
        FUN_ram_4817fb90(param_2 + 8);
        iVar1 = param_1 + 4;
        do {
          iVar5 = FUN_ram_4818023e(local_7c,iVar1);
          if (iVar5 < 0) {
            FUN_ram_4817fb86(auStack_84);
            iVar5 = FUN_ram_4818126a(auStack_84,2,iVar1,param_5,param_6);
            if (iVar5 == 0) {
              iVar5 = FUN_ram_4817bf84(local_7c,local_7c,auStack_84);
              if ((iVar5 == 0) && (iVar5 = FUN_ram_48172ae2(local_7c,param_1), iVar5 == 0)) {
                DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
                iVar5 = FUN_ram_4817bf84(local_7c + 4,local_7c + 4,auStack_84);
                if (iVar5 == 0) {
                  iVar5 = FUN_ram_48172ae2(local_7c + 4,param_1);
                  if (iVar5 != 0) {
                    FUN_ram_4817fb90(auStack_84);
                    goto joined_r0x481750ce;
                  }
                  DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
                  FUN_ram_4817fb90(auStack_84);
                  iVar12 = *(int *)(param_1 + 0x40);
                  goto LAB_ram_48174dba;
                }
              }
              FUN_ram_4817fb90(auStack_84);
            }
            else {
              FUN_ram_4817fb90(auStack_84);
            }
joined_r0x481750ce:
            if (iVar5 == -0xe) {
              iVar5 = -0x4d00;
            }
            break;
          }
          iVar5 = FUN_ram_481803f0(local_7c,local_7c,iVar1);
        } while (iVar5 == 0);
      }
    }
LAB_ram_48175018:
    FUN_ram_4817fb90(local_7c);
    FUN_ram_4817fb90(local_7c + 2);
    FUN_ram_4817fb90(local_7c + 4);
    FUN_ram_4817fb90(auStack_8c);
    do {
      FUN_ram_4817fb90(puVar2);
      puVar2 = puVar2 + 8;
    } while (puVar2 != auStack_40);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      return 0;
    }
  }
  uVar10 = 4;
  if (*(uint *)(param_1 + 0x40) < 5) {
    uVar10 = 2;
    uStack_b4 = 2;
    iStack_b0 = 2;
    uStack_a8 = 2;
    iVar5 = 1;
  }
  else {
    uStack_b4 = 8;
    uStack_a8 = 4;
    iStack_b0 = 8;
    iVar5 = 3;
  }
  uVar10 = ((*(uint *)(param_1 + 0x40) - 1) + uVar10) / uVar10;
  iVar6 = thunk_FUN_ram_4817b126(iStack_b0,0x18);
  if (iVar6 == 0) {
    iVar1 = -0x4d80;
    goto LAB_ram_4817505a;
  }
  iVar12 = iVar6 + uStack_b4 * 0x18;
  iVar1 = iVar6;
  do {
    FUN_ram_4817fb86(iVar1);
    FUN_ram_4817fb86(iVar1 + 8);
    iVar7 = iVar1 + 0x10;
    iVar1 = iVar1 + 0x18;
    FUN_ram_4817fb86(iVar7);
  } while (iVar12 != iVar1);
  puVar2 = auStack_60;
  local_7c[0] = 0;
  local_7c[1] = 0;
  local_7c[2] = 0;
  local_7c[3] = 0;
  local_7c[4] = 0;
  local_7c[5] = 0;
  local_7c[6] = 0;
  puVar13 = puVar2;
  do {
    FUN_ram_4817fb86(puVar13);
    puVar13 = puVar13 + 8;
  } while (puVar13 != auStack_40);
  iVar1 = FUN_ram_4817fe72(iVar6,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4817fe72(iVar6 + 8,param_4 + 8), iVar1 == 0)) {
    iVar7 = iVar6 + 0x10;
    iVar1 = FUN_ram_4817fe72(iVar7,param_4 + 0x10);
    if (iVar1 == 0) {
      if (iVar5 * uVar10 != 0) {
        uVar3 = 0;
        do {
          uVar8 = 1 << (uVar3 / uVar10 & 0x1f);
          iVar11 = ((uVar8 & 0xfe) + ((uVar8 & 0xff) >> 1)) * 8 + iVar6;
          iVar14 = (uVar8 & 0xff) * 0x18 + iVar6;
          if (uVar3 % uVar10 == 0) {
            iVar1 = FUN_ram_4817fe72(iVar14,iVar11);
            if (iVar1 != 0) goto LAB_ram_48174a72;
            iVar1 = FUN_ram_4817fe72(iVar14 + 8,iVar11 + 8);
            if ((iVar1 != 0) || (iVar1 = FUN_ram_4817fe72(iVar14 + 0x10,iVar11 + 0x10), iVar1 != 0))
            goto LAB_ram_48174a72;
          }
          iVar1 = FUN_ram_4817339e(param_1,iVar14,iVar14,puVar2);
          uVar3 = uVar3 + 1;
          if (iVar1 != 0) goto LAB_ram_48174a72;
        } while (uVar3 != iVar5 * uVar10);
      }
      iVar5 = 0;
      uVar3 = 1;
      piVar9 = local_7c;
      do {
        *piVar9 = uVar3 * 0x18 + iVar6;
        uVar3 = uVar3 * 2 & 0xff;
        iVar5 = iVar5 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar3 < uStack_b4);
      iVar1 = FUN_ram_48173140(param_1,local_7c,iVar5);
      if (iVar1 == 0) {
        uVar3 = 1;
        do {
          iVar5 = uVar3 * 0x30 + -0x18 + iVar6;
          uVar8 = uVar3;
          while( true ) {
            uVar8 = uVar8 - 1;
            if (uVar8 == 0xffffffff) break;
            iVar1 = FUN_ram_481737ce(param_1,iVar5,iVar5 + uVar3 * -0x18,iVar6 + uVar3 * 0x18,puVar2
                                    );
            iVar5 = iVar5 + -0x18;
            if (iVar1 != 0) goto LAB_ram_48174a72;
          }
          uVar3 = uVar3 * 2 & 0xff;
        } while (uVar3 < uStack_b4);
        iVar5 = iVar6 + 0x18;
        piVar9 = local_7c;
        do {
          *piVar9 = iVar5;
          iVar5 = iVar5 + 0x18;
          piVar9 = piVar9 + 1;
        } while (iStack_b0 * 0x18 + iVar6 != iVar5);
        iVar1 = FUN_ram_48173140(param_1,local_7c,iStack_b0 + -1);
        if (iVar1 == 0) {
          iVar5 = iVar7;
          do {
            iVar11 = iVar5 + 0x18;
            FUN_ram_4817fb90(iVar5);
            iVar5 = iVar11;
          } while (iVar7 + uStack_b4 * 0x18 != iVar11);
        }
      }
    }
  }
LAB_ram_48174a72:
  do {
    FUN_ram_4817fb90(puVar2);
    puVar2 = puVar2 + 8;
  } while (puVar2 != auStack_40);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_48173b70(param_1,param_2,param_3,iVar6,uStack_b4,uStack_a8,uVar10,param_5,
                             param_6);
    iVar5 = iVar6;
    if (*(int *)(param_1 + 0x58) != iVar6) goto LAB_ram_48174a92;
  }
  else {
    iVar5 = iVar6;
    if (iVar6 == *(int *)(param_1 + 0x58)) goto LAB_ram_4817505a;
LAB_ram_48174a92:
    do {
      FUN_ram_4817fb90(iVar5);
      FUN_ram_4817fb90(iVar5 + 8);
      iVar7 = iVar5 + 0x18;
      FUN_ram_4817fb90(iVar5 + 0x10);
      iVar5 = iVar7;
    } while (iVar12 != iVar7);
    thunk_FUN_ram_4ff209c6(iVar6);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_ram_4817505a:
  if (param_2 != 0) {
    FUN_ram_4817fb90(param_2);
    FUN_ram_4817fb90(param_2 + 8);
    FUN_ram_4817fb90(param_2 + 0x10);
  }
  return iVar1;
LAB_ram_48174dba:
  if (iVar12 == -1) {
    iVar5 = FUN_ram_48180ec2(0,iVar6,iVar6,iVar1);
    if (((iVar5 == 0) && (iVar5 = FUN_ram_4817bf84(param_2,param_2,iVar6), iVar5 == 0)) &&
       (iVar5 = FUN_ram_48172ae2(param_2,param_1), iVar5 == 0)) {
      DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      iVar5 = FUN_ram_4817ff24(iVar6);
    }
    goto LAB_ram_48175018;
  }
  uVar4 = FUN_ram_4817ffaa(param_3,iVar12);
  iVar5 = FUN_ram_4817fcd0(param_2,local_7c,uVar4);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_4817fcd0(iVar6,local_7c + 4,uVar4), iVar5 != 0))
  goto LAB_ram_48175018;
  iVar5 = FUN_ram_4818058e(puVar2,param_2,iVar6);
  while( true ) {
    if (iVar5 != 0) goto LAB_ram_48175018;
    iVar5 = FUN_ram_4818023e(puVar2,iVar1);
    if (iVar5 < 0) break;
    iVar5 = FUN_ram_481803f0(puVar2,puVar2,iVar1);
  }
  iVar5 = FUN_ram_48180594(auStack_58,param_2,iVar6);
  while( true ) {
    if (iVar5 != 0) goto LAB_ram_48175018;
    if (-1 < sStack_54) break;
    iVar5 = FUN_ram_481802e8(auStack_58,0);
    if (iVar5 == 0) break;
    iVar5 = FUN_ram_4818058e(auStack_58,auStack_58,iVar1);
  }
  iVar5 = FUN_ram_4818058e(auStack_50,local_7c,local_7c + 4);
  while( true ) {
    if (iVar5 != 0) goto LAB_ram_48175018;
    iVar5 = FUN_ram_4818023e(auStack_50,iVar1);
    if (iVar5 < 0) break;
    iVar5 = FUN_ram_481803f0(auStack_50,auStack_50,iVar1);
  }
  iVar5 = FUN_ram_48180594(auStack_48,local_7c,local_7c + 4);
  while( true ) {
    if (iVar5 != 0) goto LAB_ram_48175018;
    if (-1 < sStack_44) break;
    iVar5 = FUN_ram_481802e8(auStack_48,0);
    if (iVar5 == 0) break;
    iVar5 = FUN_ram_4818058e(auStack_48,auStack_48,iVar1);
  }
  iVar5 = FUN_ram_4817bf84(auStack_48,auStack_48,puVar2);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_48172ae2(auStack_48,param_1), iVar5 != 0))
  goto LAB_ram_48175018;
  DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
  iVar5 = FUN_ram_4817bf84(auStack_50,auStack_50,auStack_58);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_48172ae2(auStack_50,param_1), iVar5 != 0))
  goto LAB_ram_48175018;
  DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
  iVar5 = FUN_ram_4817bf84(puVar2,puVar2,puVar2);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_48172ae2(puVar2,param_1), iVar5 != 0)) goto LAB_ram_48175018;
  DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
  iVar5 = FUN_ram_4817bf84(auStack_58,auStack_58);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_48172ae2(auStack_58,param_1), iVar5 != 0))
  goto LAB_ram_48175018;
  DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
  iVar5 = FUN_ram_4817bf84(param_2,puVar2,auStack_58);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_48172ae2(param_2,param_1), iVar5 != 0))
  goto LAB_ram_48175018;
  DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
  iVar5 = FUN_ram_48180594(puVar2,puVar2,auStack_58);
  while( true ) {
    if (iVar5 != 0) goto LAB_ram_48175018;
    if ((-1 < sStack_5c) || (iVar5 = FUN_ram_481802e8(puVar2,0), iVar5 == 0)) break;
    iVar5 = FUN_ram_4818058e(puVar2,puVar2,iVar1);
  }
  iVar5 = FUN_ram_48172cf8(param_1,iVar6,param_1 + 0xc,puVar2);
  if ((((iVar5 != 0) ||
       (((iVar5 = FUN_ram_48172d3c(param_1,iVar6,auStack_58,iVar6), iVar5 != 0 ||
         (iVar5 = FUN_ram_48172d3c(param_1,local_7c,auStack_48,auStack_50), iVar5 != 0)) ||
        (iVar5 = FUN_ram_48172cf8(param_1,local_7c,local_7c,local_7c), iVar5 != 0)))) ||
      (((iVar5 = FUN_ram_48172c9a(param_1,local_7c + 4,auStack_48,auStack_50), iVar5 != 0 ||
        (iVar5 = FUN_ram_48172cf8(param_1,local_7c + 4,local_7c + 4), iVar5 != 0)) ||
       (iVar5 = FUN_ram_48172cf8(param_1,local_7c + 4,auStack_8c), iVar5 != 0)))) ||
     ((iVar5 = FUN_ram_48172cf8(param_1,iVar6,puVar2,iVar6), iVar5 != 0 ||
      (iVar5 = FUN_ram_4817fcd0(param_2,local_7c,uVar4), iVar5 != 0)))) goto LAB_ram_48175018;
  iVar5 = FUN_ram_4817fcd0(iVar6,local_7c + 4,uVar4);
  iVar12 = iVar12 + -1;
  if (iVar5 != 0) goto LAB_ram_48175018;
  goto LAB_ram_48174dba;
}


