/* Firmware entry: 0x48116f6a */

void FUN_ram_48116f6a(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int aiStack_4c [10];
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar11 = (byte *)&local_60;
  iVar5 = FUN_ram_480b5ab0();
  puVar2 = DAT_ram_4ff6dcac;
  if (iVar5 == 0) {
    return;
  }
  puVar10 = DAT_ram_4ff6dcac + 0x35f4;
  iVar5 = FUN_ram_480b5c0c(&DAT_ram_4ff5bd98,puVar10,0x30001);
  uVar7 = DAT_ram_4ff5bdb8;
  if (iVar5 == 1) {
    puVar12 = puVar2 + 0x1afa;
    puVar2[0x1b675] = DAT_ram_4ff5bdb8;
    iVar5 = FUN_ram_480a710e(puVar10,uVar7,puVar12,
                             &PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50);
    if (iVar5 == 0) {
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_journal_payload_invalid_ram_481d0740;
    }
    else {
      iVar5 = FUN_ram_48034a9e(puVar12);
      if ((iVar5 != 0) && (iVar5 = FUN_ram_480fc0c2(puVar12), iVar5 != 0)) {
        puVar12 = puVar2 + 0x1afa;
        puVar10 = puVar2;
        do {
          uVar7 = puVar12[1];
          uVar8 = puVar12[2];
          uVar9 = puVar12[3];
          *puVar10 = *puVar12;
          puVar10[1] = uVar7;
          puVar10[2] = uVar8;
          puVar10[3] = uVar9;
          puVar12 = puVar12 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar12 != puVar2 + 0x2876);
        puVar13 = puVar2 + 0x1afa;
        *puVar10 = *puVar12;
        puVar10 = puVar2 + 0xd7d;
        do {
          uVar7 = puVar13[1];
          uVar8 = puVar13[2];
          uVar9 = puVar13[3];
          *puVar10 = *puVar13;
          puVar10[1] = uVar7;
          puVar10[2] = uVar8;
          puVar10[3] = uVar9;
          puVar13 = puVar13 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar13 != puVar2 + 0x2876);
        *puVar10 = *puVar13;
        DAT_ram_4ff5bd30 = DAT_ram_4ff5bd9c;
        DAT_ram_4ff5bd64 = (undefined *)0x0;
        DAT_ram_4ff5bd34 = DAT_ram_4ff5bda0;
        DAT_ram_4ff5bd38 = DAT_ram_4ff5bda4;
        DAT_ram_4ff5bd3c = DAT_ram_4ff5bda8;
        DAT_ram_4ff5bd40 = DAT_ram_4ff5bdac;
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = &DAT_ram_481df390;
        DAT_ram_4ff6dca9 = 1;
        DAT_ram_4ff6dca8 = 1;
        FUN_ram_4811055a(puVar2,&DAT_ram_4ff5bd10);
        DAT_ram_4ff6dca0 = DAT_ram_4ff6dca0 + 1;
        return;
      }
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_runtime_apply_failed_ram_481cfa60;
    }
  }
  else {
    if (iVar5 != 0) {
      DAT_ram_4ff5bd64 = &sedeleg;
      if (iVar5 == 2) {
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "journal_corrupt";
        return;
      }
      if (iVar5 != 3) {
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "journal_capacity";
        return;
      }
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "journal_io";
      return;
    }
    iVar5 = FUN_ram_4804e46c();
    if (iVar5 != 0) {
      iVar5 = FUN_ram_48076bd0(puVar2 + 0x1afa,1);
      if (iVar5 != 0) {
        local_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        FUN_ram_48132f46(&local_60,0x10);
        bVar4 = 0;
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          bVar4 = bVar4 | bVar1;
        } while (pbVar11 != (byte *)&uStack_50);
        if (bVar4 == 0) {
          local_60 = CONCAT31(local_60._1_3_,1);
        }
        aiStack_4c[0] = (int)puVar2 + 0x3d7d1;
        *(undefined1 *)((int)puVar2 + 0x3d7d1) = 0;
        aiStack_4c[2] = 0;
        aiStack_4c[3] = 0;
        aiStack_4c[4] = 0;
        aiStack_4c[5] = 0;
        aiStack_4c[6] = 0;
        aiStack_4c[7] = 0;
        aiStack_4c[8] = 0;
        aiStack_4c[9] = 0;
        aiStack_4c[1] = 0x30001;
        uStack_50 = 1;
        uStack_24 = 1;
        iVar6 = FUN_ram_48111870(aiStack_4c,puVar2 + 0x1afa);
        iVar3 = aiStack_4c[2];
        iVar5 = aiStack_4c[0];
        if ((iVar6 != 0) &&
           (iVar6 = FUN_ram_480b621c(&DAT_ram_4ff5bd98,&local_60,aiStack_4c[0],aiStack_4c[2]),
           iVar6 != 0)) {
          puVar2[0x1b675] = iVar3;
          FUN_ram_4ff45158(puVar10,iVar5,iVar3);
          puVar12 = puVar2 + 0x1afa;
          puVar10 = puVar2;
          do {
            uVar7 = puVar12[1];
            uVar8 = puVar12[2];
            uVar9 = puVar12[3];
            *puVar10 = *puVar12;
            puVar10[1] = uVar7;
            puVar10[2] = uVar8;
            puVar10[3] = uVar9;
            puVar12 = puVar12 + 4;
            puVar10 = puVar10 + 4;
          } while (puVar12 != puVar2 + 0x2876);
          puVar13 = puVar2 + 0x1afa;
          *puVar10 = *puVar12;
          puVar10 = puVar2 + 0xd7d;
          do {
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar9 = puVar13[3];
            *puVar10 = *puVar13;
            puVar10[1] = uVar7;
            puVar10[2] = uVar8;
            puVar10[3] = uVar9;
            puVar13 = puVar13 + 4;
            puVar10 = puVar10 + 4;
          } while (puVar13 != puVar2 + 0x2876);
          *puVar10 = *puVar13;
          PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = &DAT_ram_481df390;
          DAT_ram_4ff5bd30 = local_60;
          DAT_ram_4ff5bd34 = uStack_5c;
          DAT_ram_4ff5bd38 = uStack_58;
          DAT_ram_4ff5bd3c = uStack_54;
          DAT_ram_4ff5bd40 = uStack_50;
          DAT_ram_4ff5bd64 = (undefined *)0x0;
          DAT_ram_4ff6dca8 = 1;
          DAT_ram_4ff6dca9 = 1;
          return;
        }
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_journal_commit_failed_ram_481cfa48;
        DAT_ram_4ff5bd64 = &sedeleg;
        return;
      }
    }
    PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_storage_invalid_ram_481d0240;
  }
  DAT_ram_4ff5bd64 = &sedeleg;
  return;
}


