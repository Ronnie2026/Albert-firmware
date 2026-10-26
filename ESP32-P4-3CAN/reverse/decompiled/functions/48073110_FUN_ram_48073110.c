/* Firmware entry: 0x48073110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48073110(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  char *pcStack_7d0;
  undefined4 local_7cc [162];
  undefined4 uStack_544;
  char local_540 [4];
  char *pcStack_53c;
  char acStack_538 [4];
  char acStack_534 [4];
  char acStack_530 [4];
  char acStack_52c [4];
  char local_528 [4];
  char acStack_524 [4];
  char acStack_520 [4];
  char acStack_51c [4];
  char acStack_518 [345];
  undefined1 auStack_3bf [263];
  char acStack_2b8 [4];
  char local_2b4 [4];
  char acStack_2b0 [4];
  char acStack_2ac [4];
  char acStack_2a8 [4];
  char acStack_2a4 [4];
  char acStack_2a0 [4];
  char local_29c [4];
  char acStack_298 [4];
  char acStack_294 [4];
  char acStack_290 [4];
  char acStack_28c [345];
  undefined1 auStack_133 [263];
  char acStack_2c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar13 = &DAT_ram_482230e4;
  puVar8 = local_7cc;
  puVar9 = puVar13;
  do {
    uVar11 = puVar9[1];
    uVar10 = puVar9[2];
    uVar3 = puVar9[3];
    uVar6 = puVar9[4];
    uVar7 = puVar9[5];
    *puVar8 = *puVar9;
    puVar8[1] = uVar11;
    puVar8[2] = uVar10;
    puVar8[3] = uVar3;
    puVar8[4] = uVar6;
    puVar8[5] = uVar7;
    puVar9 = puVar9 + 6;
    puVar8 = puVar8 + 6;
  } while (puVar9 != (undefined4 *)&DAT_ram_4822336c);
  *puVar8 = _DAT_ram_4822336c;
  if (DAT_ram_4ff47e64 == '\0') {
    pcVar4 = "nvs";
  }
  else {
    pcVar4 = "p4_data";
  }
  iVar5 = FUN_ram_48159fd2(pcVar4,"p4_cloud",0,&uStack_7dc);
  if (iVar5 == 0x1102) {
    pcStack_53c = "https://tesla-cn.srlt.cc:888/api/p4/report";
    local_540[0] = '*';
    local_540[1] = '\0';
    local_540[2] = '\0';
    local_540[3] = '\0';
    iVar5 = FUN_ram_4807271e(0x2a,"https://tesla-cn.srlt.cc:888/api/p4/report",0x180);
    if (iVar5 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    pcVar4 = "p4_4a40d69cad0226cb872e9f220a6981caa9b284fbe8cd44c1";
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if (0x5d < (byte)(cVar2 - 0x21U)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    } while (pcVar4 != "");
    pcVar4 = local_2b4;
    do {
      uVar11 = puVar13[1];
      uVar3 = puVar13[2];
      uVar6 = puVar13[3];
      uVar7 = puVar13[4];
      uVar10 = puVar13[5];
      *(undefined4 *)pcVar4 = *puVar13;
      *(undefined4 *)(pcVar4 + 4) = uVar11;
      *(undefined4 *)(pcVar4 + 8) = uVar3;
      *(undefined4 *)(pcVar4 + 0xc) = uVar6;
      *(undefined4 *)(pcVar4 + 0x10) = uVar7;
      *(undefined4 *)(pcVar4 + 0x14) = uVar10;
      puVar13 = puVar13 + 6;
      pcVar4 = pcVar4 + 0x18;
    } while (puVar13 != (undefined4 *)&DAT_ram_4822336c);
    *(undefined4 *)pcVar4 = _DAT_ram_4822336c;
    local_2b4[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0];
    local_2b4[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[1];
    local_2b4[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[2];
    local_2b4[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[3];
    acStack_2b0[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[4];
    acStack_2b0[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[5];
    acStack_2b0[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[6];
    acStack_2b0[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[7];
    acStack_28c[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x28];
    acStack_28c[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x29];
    acStack_2ac[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[8];
    acStack_2ac[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[9];
    acStack_2ac[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[10];
    acStack_2ac[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xb];
    acStack_2a8[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xc];
    acStack_2a8[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xd];
    acStack_2a8[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xe];
    acStack_2a8[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xf];
    acStack_2a4[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x10];
    acStack_2a4[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x11];
    acStack_2a4[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x12];
    acStack_2a4[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x13];
    acStack_2a0[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x14];
    acStack_2a0[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x15];
    acStack_2a0[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x16];
    acStack_2a0[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x17];
    local_29c[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x18];
    local_29c[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x19];
    local_29c[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1a];
    local_29c[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1b];
    acStack_298[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1c];
    acStack_298[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1d];
    acStack_298[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1e];
    acStack_298[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1f];
    acStack_294[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x20];
    acStack_294[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x21];
    acStack_294[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x22];
    acStack_294[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x23];
    acStack_290[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x24];
    acStack_290[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x25];
    acStack_290[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x26];
    acStack_290[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x27];
    FUN_ram_4ff45158(auStack_133,&DAT_ram_48222b5c,0x33);
    pcVar4 = local_2b4;
    do {
      pcVar12 = pcVar4;
      puVar9 = param_1;
      uVar3 = *(undefined4 *)(pcVar12 + 4);
      uVar6 = *(undefined4 *)(pcVar12 + 8);
      uVar7 = *(undefined4 *)(pcVar12 + 0xc);
      uVar10 = *(undefined4 *)(pcVar12 + 0x10);
      uVar11 = *(undefined4 *)(pcVar12 + 0x14);
      *puVar9 = *(undefined4 *)pcVar12;
      puVar9[1] = uVar3;
      puVar9[2] = uVar6;
      puVar9[3] = uVar7;
      puVar9[4] = uVar10;
      puVar9[5] = uVar11;
      pcVar4 = pcVar12 + 0x18;
      param_1 = puVar9 + 6;
    } while (pcVar4 != acStack_2c);
    cVar2 = pcVar12[0x1a];
    *(undefined2 *)(puVar9 + 6) = *(undefined2 *)pcVar4;
    *(char *)((int)puVar9 + 0x1a) = cVar2;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar5;
  }
  if (iVar5 == 0) {
    memset(local_2b4,0,0x291);
    uStack_7d8 = 0x291;
    iVar5 = FUN_ram_4815a556(uStack_7dc,"config1",local_2b4,&uStack_7d8);
    FUN_ram_4815a050(uStack_7dc);
    if (iVar5 == 0x1102) {
      pcStack_7d0 = "https://tesla-cn.srlt.cc:888/api/p4/report";
      uStack_7d4 = 0x2a;
      iVar5 = FUN_ram_4807271e(0x2a,"https://tesla-cn.srlt.cc:888/api/p4/report",0x180);
      if (iVar5 != 0) {
        pcVar4 = "p4_4a40d69cad0226cb872e9f220a6981caa9b284fbe8cd44c1";
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          if (0x5d < (byte)(cVar2 - 0x21U)) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0;
          }
        } while (pcVar4 != "");
        pcVar4 = local_540;
        do {
          uVar11 = puVar13[1];
          uVar3 = puVar13[2];
          uVar6 = puVar13[3];
          uVar7 = puVar13[4];
          uVar10 = puVar13[5];
          *(undefined4 *)pcVar4 = *puVar13;
          *(undefined4 *)(pcVar4 + 4) = uVar11;
          *(undefined4 *)(pcVar4 + 8) = uVar3;
          *(undefined4 *)(pcVar4 + 0xc) = uVar6;
          *(undefined4 *)(pcVar4 + 0x10) = uVar7;
          *(undefined4 *)(pcVar4 + 0x14) = uVar10;
          puVar13 = puVar13 + 6;
          pcVar4 = pcVar4 + 0x18;
        } while (puVar13 != (undefined4 *)&DAT_ram_4822336c);
        *(undefined4 *)pcVar4 = _DAT_ram_4822336c;
        local_540[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0];
        local_540[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[1];
        local_540[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[2];
        local_540[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[3];
        pcStack_53c = (char *)s_https___tesla_cn_srlt_cc_888_api_ram_48222b90._4_4_;
        acStack_51c[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x24];
        acStack_51c[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x25];
        acStack_51c[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x26];
        acStack_51c[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x27];
        acStack_518[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x28];
        acStack_518[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x29];
        acStack_538[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[8];
        acStack_538[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[9];
        acStack_538[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[10];
        acStack_538[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xb];
        acStack_534[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xc];
        acStack_534[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xd];
        acStack_534[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xe];
        acStack_534[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xf];
        acStack_530[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x10];
        acStack_530[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x11];
        acStack_530[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x12];
        acStack_530[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x13];
        acStack_52c[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x14];
        acStack_52c[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x15];
        acStack_52c[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x16];
        acStack_52c[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x17];
        local_528[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x18];
        local_528[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x19];
        local_528[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1a];
        local_528[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1b];
        acStack_524[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1c];
        acStack_524[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1d];
        acStack_524[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1e];
        acStack_524[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1f];
        acStack_520[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x20];
        acStack_520[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x21];
        acStack_520[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x22];
        acStack_520[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x23];
        FUN_ram_4ff45158(auStack_3bf,&DAT_ram_48222b5c,0x33);
        puVar9 = local_7cc;
        pcVar4 = local_540;
        do {
          pcVar12 = pcVar4;
          puVar8 = puVar9;
          uVar11 = *(undefined4 *)(pcVar12 + 4);
          uVar3 = *(undefined4 *)(pcVar12 + 8);
          uVar6 = *(undefined4 *)(pcVar12 + 0xc);
          uVar7 = *(undefined4 *)(pcVar12 + 0x10);
          uVar10 = *(undefined4 *)(pcVar12 + 0x14);
          *puVar8 = *(undefined4 *)pcVar12;
          puVar8[1] = uVar11;
          puVar8[2] = uVar3;
          puVar8[3] = uVar6;
          puVar8[4] = uVar7;
          puVar8[5] = uVar10;
          pcVar4 = pcVar12 + 0x18;
          puVar9 = puVar8 + 6;
        } while (pcVar4 != acStack_2b8);
        *(undefined2 *)(puVar8 + 6) = *(undefined2 *)pcVar4;
        *(char *)((int)puVar8 + 0x1a) = pcVar12[0x1a];
        goto LAB_ram_48073206;
      }
    }
    else if ((iVar5 == 0) && (iVar5 = FUN_ram_48072c5c(local_2b4,uStack_7d8,local_7cc), iVar5 != 0))
    {
LAB_ram_48073206:
      puVar9 = local_7cc;
      do {
        puVar13 = puVar9;
        puVar8 = param_1;
        uVar11 = puVar13[1];
        uVar3 = puVar13[2];
        uVar6 = puVar13[3];
        uVar7 = puVar13[4];
        uVar10 = puVar13[5];
        *puVar8 = *puVar13;
        puVar8[1] = uVar11;
        puVar8[2] = uVar3;
        puVar8[3] = uVar6;
        puVar8[4] = uVar7;
        puVar8[5] = uVar10;
        puVar9 = puVar13 + 6;
        param_1 = puVar8 + 6;
      } while (puVar9 != &uStack_544);
      uVar1 = *(undefined1 *)((int)puVar13 + 0x1a);
      *(undefined2 *)(puVar8 + 6) = *(undefined2 *)puVar9;
      *(undefined1 *)((int)puVar8 + 0x1a) = uVar1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
  }
  return 0;
}


