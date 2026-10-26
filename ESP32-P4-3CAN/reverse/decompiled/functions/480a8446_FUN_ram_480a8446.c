/* Firmware entry: 0x480a8446 */

/* WARNING: Removing unreachable block (ram,0x480ab12c) */
/* WARNING: Removing unreachable block (ram,0x480ab112) */

void FUN_ram_480a8446(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  void *pvVar18;
  undefined4 local_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar10 = (byte *)&local_28;
  iVar2 = param_2;
  do {
    FUN_ram_480a7960(param_1,iVar2);
    cVar16 = (char)param_1[3];
    local_28 = 0;
    uVar5 = *(uint *)(iVar2 + 0x44);
    if (cVar16 == '\0') {
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        uVar7 = *(uint *)(iVar2 + 0x48);
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        cVar11 = '\0';
      }
      else {
        uVar7 = param_1[2];
        uVar13 = param_1[1];
        local_28 = uVar5;
        if (uVar7 <= uVar13) goto LAB_ram_480a848e;
        uVar7 = *(uint *)(iVar2 + 0x48);
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        cVar11 = '\0';
      }
LAB_ram_480a87a0:
      *(uint *)(iVar2 + 0x44) = uVar5;
      local_28 = uVar7;
      if (cVar11 != '\0') {
        uVar5 = param_1[2];
        uVar13 = param_1[1];
        cVar11 = '\0';
        if (uVar5 <= uVar13) goto LAB_ram_480a84f2;
      }
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = *(byte *)(iVar2 + 0x4c);
      *(uint *)(iVar2 + 0x48) = uVar7;
      goto LAB_ram_480a8552;
    }
    cVar11 = '\0';
    if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480a84c2:
      uVar7 = *(uint *)(iVar2 + 0x48);
    }
    else {
      uVar7 = param_1[2];
      uVar13 = param_1[1];
      if (uVar13 < uVar7) {
        uVar7 = *(uint *)(iVar2 + 0x48);
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        cVar11 = '\0';
      }
      else {
LAB_ram_480a848e:
        if (uVar13 - uVar7 < 4) {
          *(undefined1 *)((int)param_1 + 0xd) = 0;
          cVar11 = '\0';
        }
        else {
          puVar14 = (uint *)(*param_1 + uVar7);
          if (cVar16 != '\0') {
            local_28 = *puVar14;
            param_1[2] = uVar7 + 4;
            cVar11 = cVar16;
            goto LAB_ram_480a84c2;
          }
          *(byte *)((int)puVar14 + 2) = local_28._2_1_;
          *(byte *)puVar14 = (byte)local_28;
          *(byte *)((int)puVar14 + 1) = local_28._1_1_;
          *(byte *)((int)puVar14 + 3) = local_28._3_1_;
          cVar16 = (char)param_1[3];
          cVar11 = *(char *)((int)param_1 + 0xd);
          param_1[2] = param_1[2] + 4;
        }
        uVar7 = *(uint *)(iVar2 + 0x48);
        if (cVar16 == '\0') goto LAB_ram_480a87a0;
      }
    }
    *(uint *)(iVar2 + 0x44) =
         (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
         local_28 & 0xff000000;
    local_28 = 0;
    if (cVar11 == '\0') {
LAB_ram_480a87be:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a87c2:
      cVar11 = '\0';
LAB_ram_480a8524:
      *(uint *)(iVar2 + 0x48) =
           (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
           local_28 & 0xff000000;
      if ((cVar11 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        bVar6 = 0;
      }
      else {
        bVar6 = *(byte *)(*param_1 + uVar5);
        param_1[2] = uVar5 + 1;
        if (1 < bVar6) {
          *(undefined1 *)((int)param_1 + 0xd) = 0;
        }
      }
    }
    else {
      uVar5 = param_1[2];
      uVar13 = param_1[1];
      if (uVar13 < uVar5) goto LAB_ram_480a87be;
LAB_ram_480a84f2:
      if (3 < uVar13 - uVar5) {
        puVar14 = (uint *)(*param_1 + uVar5);
        if (cVar11 == '\0') {
          *(byte *)((int)puVar14 + 1) = local_28._1_1_;
          *(byte *)((int)puVar14 + 2) = local_28._2_1_;
          *(byte *)puVar14 = (byte)local_28;
          *(byte *)((int)puVar14 + 3) = local_28._3_1_;
          cVar11 = *(char *)((int)param_1 + 0xd);
          uVar5 = param_1[2] + 4;
          param_1[2] = uVar5;
          bVar6 = *(byte *)(iVar2 + 0x4c);
          if ((char)param_1[3] == '\0') {
            *(uint *)(iVar2 + 0x48) = uVar7;
            if (cVar11 != '\0') {
              if (uVar5 < (uint)param_1[1]) {
                *(byte *)(*param_1 + uVar5) = bVar6;
                param_1[2] = param_1[2] + 1;
              }
              else {
                *(undefined1 *)((int)param_1 + 0xd) = 0;
              }
            }
            goto LAB_ram_480a8552;
          }
        }
        else {
          local_28 = *puVar14;
          param_1[2] = uVar5 + 4;
        }
        goto LAB_ram_480a8524;
      }
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      if (cVar11 != '\0') goto LAB_ram_480a87c2;
      bVar6 = *(byte *)(iVar2 + 0x4c);
      *(uint *)(iVar2 + 0x48) = uVar7;
    }
LAB_ram_480a8552:
    uStack_24 = 0;
    *(bool *)(iVar2 + 0x4c) = bVar6 != 0;
    iVar2 = iVar2 + 0x50;
  } while (iVar2 != param_2 + 0x280);
  uVar4 = *(undefined1 *)(param_2 + 0x280);
  cVar16 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') {
    if (cVar16 != '\0') {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        *(undefined1 *)(param_1[2] + *param_1) = uVar4;
        param_1[2] = param_1[2] + 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
LAB_ram_480a8748:
    *(undefined1 *)(param_2 + 0x280) = uVar4;
    cVar11 = *(char *)((int)param_1 + 0xd);
    cVar16 = *(char *)(param_2 + 0x281);
    if ((char)param_1[3] != '\0') goto LAB_ram_480a875c;
LAB_ram_480a85b4:
    if (cVar11 != '\0') {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        *(char *)(param_1[2] + *param_1) = cVar16;
        param_1[2] = param_1[2] + 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
  else {
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      uVar4 = 0;
      goto LAB_ram_480a8748;
    }
    bVar6 = *(byte *)(*param_1 + uVar5);
    param_1[2] = uVar5 + 1;
    if (bVar6 < 2) {
      uVar4 = bVar6 != 0;
      goto LAB_ram_480a8748;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(char *)(param_2 + 0x280) = cVar16;
    cVar11 = *(char *)((int)param_1 + 0xd);
    cVar16 = *(char *)(param_2 + 0x281);
    if ((char)param_1[3] == '\0') goto LAB_ram_480a85b4;
LAB_ram_480a875c:
    if ((cVar11 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
    }
    else {
      bVar6 = *(byte *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (bVar6 < 2) {
        cVar16 = bVar6 != 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        cVar16 = cVar11;
      }
    }
  }
  *(char *)(param_2 + 0x281) = cVar16;
  FUN_ram_480a7960(param_1,param_2 + 0x282);
  FUN_ram_480a7960(param_1,param_2 + 0x2c3);
  cVar16 = (char)param_1[3];
  pvVar18 = (void *)(param_2 + 0x304);
  if (cVar16 == '\0') {
    pvVar3 = memchr(pvVar18,0,0x8001);
    if (pvVar3 != (void *)0x0) {
      uVar5 = (int)pvVar3 - (int)pvVar18;
      local_28 = uVar5;
      if (*(char *)((int)param_1 + 0xd) != '\0') {
        uVar7 = param_1[2];
        if ((uVar7 <= (uint)param_1[1]) && (3 < param_1[1] - uVar7)) {
          local_28._0_1_ = (byte)uVar5;
          local_28._1_1_ = (byte)(uVar5 >> 8);
          local_28._2_1_ = (byte)(uVar5 >> 0x10);
          local_28._3_1_ = (byte)(uVar5 >> 0x18);
          pbVar9 = (byte *)(uVar7 + *param_1);
          *pbVar9 = (byte)local_28;
          pbVar9[1] = local_28._1_1_;
          pbVar9[2] = local_28._2_1_;
          pbVar9[3] = local_28._3_1_;
          cVar16 = (char)param_1[3];
          param_1[2] = param_1[2] + 4;
          if (cVar16 != '\0') goto LAB_ram_480a8656;
          goto joined_r0x480a888e;
        }
      }
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto joined_r0x480a888e;
    }
    uVar5 = *(uint *)(param_2 + 0x8308);
LAB_ram_480a88a0:
    *(uint *)(param_2 + 0x8308) = uVar5;
    uVar5 = *(uint *)(param_2 + 0x831c);
LAB_ram_480a88ac:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    bVar6 = *(byte *)(param_2 + 0x8320);
LAB_ram_480a88b8:
    *(uint *)(param_2 + 0x831c) = uVar5;
  }
  else {
    local_28 = 0;
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar5 = param_1[2];
      if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 4)) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
      else {
        local_28 = *(uint *)(uVar5 + *param_1);
        param_1[2] = uVar5 + 4;
      }
    }
LAB_ram_480a8656:
    uVar5 = (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
            local_28 & 0xff000000;
joined_r0x480a888e:
    if (0x8000 < uVar5) {
      local_28 = 0;
      uStack_24 = 0;
      uVar5 = *(uint *)(param_2 + 0x8308);
      if (cVar16 != '\0') goto LAB_ram_480a8a98;
      goto LAB_ram_480a88a0;
    }
    uStack_24 = 0;
    FUN_ram_4807a0c0(param_1,pvVar18,uVar5);
    if ((char)param_1[3] != '\0') {
      *(undefined1 *)(uVar5 + param_2 + 0x304) = 0;
      local_28 = 0;
      uVar5 = *(uint *)(param_2 + 0x8308);
      cVar16 = *(char *)((int)param_1 + 0xd);
      if ((char)param_1[3] == '\0') goto LAB_ram_480a8696;
      if (cVar16 != '\0') {
        uVar13 = param_1[2];
        uVar7 = param_1[1];
        if (uVar7 < uVar13) goto LAB_ram_480a8a98;
        goto LAB_ram_480a86c0;
      }
LAB_ram_480a8a98:
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a8a9c:
      cVar16 = '\0';
      goto LAB_ram_480a8a9e;
    }
    uVar5 = *(uint *)(param_2 + 0x8308);
    cVar16 = *(char *)((int)param_1 + 0xd);
LAB_ram_480a8696:
    uStack_24 = 0;
    local_28 = uVar5;
    if (cVar16 == '\0') goto LAB_ram_480a88a0;
    uVar13 = param_1[2];
    uVar7 = param_1[1];
    if (uVar7 < uVar13) goto LAB_ram_480a88a0;
    cVar16 = '\0';
LAB_ram_480a86c0:
    uStack_24 = 0;
    if (uVar7 - uVar13 < 4) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      if (cVar16 != '\0') goto LAB_ram_480a8a9c;
      goto LAB_ram_480a88a0;
    }
    puVar14 = (uint *)(*param_1 + uVar13);
    if (cVar16 == '\0') {
      *(byte *)((int)puVar14 + 1) = local_28._1_1_;
      *(byte *)((int)puVar14 + 2) = local_28._2_1_;
      *(byte *)puVar14 = (byte)local_28;
      *(byte *)((int)puVar14 + 3) = local_28._3_1_;
      cVar16 = *(char *)((int)param_1 + 0xd);
      uVar7 = param_1[2] + 4;
      param_1[2] = uVar7;
      if ((char)param_1[3] != '\0') goto LAB_ram_480a8a9e;
      *(uint *)(param_2 + 0x8308) = uVar5;
      bVar1 = cVar16 != '\0';
      cVar16 = '\0';
      if (bVar1) goto LAB_ram_480a8aca;
      uVar5 = *(uint *)(param_2 + 0x831c);
      goto LAB_ram_480a88ac;
    }
    local_28 = *puVar14;
    param_1[2] = uVar13 + 4;
LAB_ram_480a8a9e:
    *(uint *)(param_2 + 0x8308) =
         (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
         local_28 & 0xff000000;
    if (cVar16 != '\0') {
      uVar7 = param_1[2];
LAB_ram_480a8aca:
      uStack_24 = 0;
      if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 0x10)) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        local_28 = 0;
        uStack_24 = 0;
        uVar5 = *(uint *)(param_2 + 0x831c);
        if (cVar16 == '\0') goto LAB_ram_480a88ac;
LAB_ram_480a8f70:
        local_28 = 0;
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        goto LAB_ram_480a8f74;
      }
      if (cVar16 == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar7,param_2 + 0x830c,0x10);
      }
      else {
        FUN_ram_4ff45158(param_2 + 0x830c,*param_1 + uVar7,0x10);
      }
      iVar2 = param_1[2];
      uVar5 = *(uint *)(param_2 + 0x831c);
      uVar7 = iVar2 + 0x10;
      local_28 = 0;
      uStack_24 = 0;
      param_1[2] = uVar7;
      cVar16 = *(char *)((int)param_1 + 0xd);
      if ((char)param_1[3] != '\0') {
        if ((cVar16 == '\0') || (uVar13 = param_1[1], uVar13 < uVar7)) goto LAB_ram_480a8f70;
LAB_ram_480a8b28:
        if (uVar13 - uVar7 < 4) {
          *(undefined1 *)((int)param_1 + 0xd) = 0;
          bVar6 = *(byte *)(param_2 + 0x8320);
          if (cVar16 != '\0') goto LAB_ram_480a8f74;
          goto LAB_ram_480a88b8;
        }
        puVar14 = (uint *)(*param_1 + uVar7);
        if (cVar16 != '\0') {
          local_28 = *puVar14;
          param_1[2] = iVar2 + 0x14;
          goto LAB_ram_480a8f76;
        }
        *(byte *)puVar14 = (byte)local_28;
        *(byte *)((int)puVar14 + 1) = local_28._1_1_;
        *(byte *)((int)puVar14 + 3) = local_28._3_1_;
        *(byte *)((int)puVar14 + 2) = local_28._2_1_;
        uVar7 = param_1[2] + 4;
        param_1[2] = uVar7;
        cVar16 = *(char *)((int)param_1 + 0xd);
        bVar6 = *(byte *)(param_2 + 0x8320);
        if ((char)param_1[3] != '\0') goto LAB_ram_480a8f76;
        *(uint *)(param_2 + 0x831c) = uVar5;
        if (cVar16 != '\0') {
          if (uVar7 < (uint)param_1[1]) {
            *(byte *)(uVar7 + *param_1) = bVar6;
            param_1[2] = param_1[2] + 1;
          }
          else {
            *(undefined1 *)((int)param_1 + 0xd) = 0;
          }
        }
        goto LAB_ram_480a88c0;
      }
      local_28 = uVar5;
      if (cVar16 == '\0') goto LAB_ram_480a88ac;
      uVar13 = param_1[1];
      cVar16 = '\0';
      if (uVar7 <= uVar13) goto LAB_ram_480a8b28;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = *(byte *)(param_2 + 0x8320);
      goto LAB_ram_480a88b8;
    }
    local_28 = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a8f74:
    cVar16 = '\0';
LAB_ram_480a8f76:
    uStack_24 = 0;
    *(uint *)(param_2 + 0x831c) =
         (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
         local_28 & 0xff000000;
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (1 < bVar6) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
LAB_ram_480a88c0:
  *(bool *)(param_2 + 0x8320) = bVar6 != 0;
  FUN_ram_480a7960(param_1,param_2 + 0x8321);
  FUN_ram_480a7960(param_1,param_2 + 0x8362);
  cVar16 = (char)param_1[3];
  pvVar18 = (void *)(param_2 + 0x83a3);
  if (cVar16 != '\0') {
    local_28 = 0;
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar5 = param_1[2];
      if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 4)) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
      else {
        local_28 = *(uint *)(*param_1 + uVar5);
        param_1[2] = uVar5 + 4;
      }
    }
LAB_ram_480a8960:
    uVar5 = (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
            local_28 & 0xff000000;
joined_r0x480a897e:
    if (uVar5 < 0x10) {
      uStack_24 = 0;
      FUN_ram_4807a0c0(param_1,pvVar18,uVar5);
      if ((char)param_1[3] == '\0') {
        cVar16 = '\0';
        if (*(char *)((int)param_1 + 0xd) == '\0') {
          uVar5 = *(uint *)(param_2 + 0x83c4);
          goto LAB_ram_480aa7e4;
        }
      }
      else {
        *(undefined1 *)(param_2 + uVar5 + 0x83a3) = 0;
        cVar16 = (char)param_1[3];
        if (*(char *)((int)param_1 + 0xd) == '\0') goto LAB_ram_480a8982;
      }
      uVar5 = param_1[2];
      if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 0x10)) goto LAB_ram_480a8982;
      if (cVar16 == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar5,param_2 + 0x83b4,0x10);
      }
      else {
        FUN_ram_4ff45158(param_2 + 0x83b4,*param_1 + uVar5,0x10);
      }
      iVar2 = param_1[2];
      uVar5 = *(uint *)(param_2 + 0x83c4);
      uVar7 = iVar2 + 0x10;
      local_28 = 0;
      uStack_24 = 0;
      param_1[2] = uVar7;
      cVar16 = *(char *)((int)param_1 + 0xd);
      if ((char)param_1[3] != '\0') {
        if ((cVar16 == '\0') || (uVar13 = param_1[1], uVar13 < uVar7)) goto LAB_ram_480a8996;
LAB_ram_480a8d3e:
        if (uVar13 - uVar7 < 4) {
          *(undefined1 *)((int)param_1 + 0xd) = 0;
          bVar6 = *(byte *)(param_2 + 0x83c8);
          if (cVar16 == '\0') goto LAB_ram_480aa7f0;
          goto LAB_ram_480a899a;
        }
        puVar14 = (uint *)(*param_1 + uVar7);
        if (cVar16 != '\0') {
          local_28 = *puVar14;
          param_1[2] = iVar2 + 0x14;
          goto LAB_ram_480a899c;
        }
        *(byte *)puVar14 = (byte)local_28;
        *(byte *)((int)puVar14 + 1) = local_28._1_1_;
        *(byte *)((int)puVar14 + 3) = local_28._3_1_;
        *(byte *)((int)puVar14 + 2) = local_28._2_1_;
        uVar7 = param_1[2] + 4;
        param_1[2] = uVar7;
        cVar16 = *(char *)((int)param_1 + 0xd);
        bVar6 = *(byte *)(param_2 + 0x83c8);
        if ((char)param_1[3] != '\0') goto LAB_ram_480a899c;
        *(uint *)(param_2 + 0x83c4) = uVar5;
        if (cVar16 != '\0') {
          if (uVar7 < (uint)param_1[1]) {
            *(byte *)(uVar7 + *param_1) = bVar6;
            param_1[2] = param_1[2] + 1;
          }
          else {
            *(undefined1 *)((int)param_1 + 0xd) = 0;
          }
        }
        goto LAB_ram_480a89d0;
      }
      local_28 = uVar5;
      if (cVar16 == '\0') goto LAB_ram_480aa7e4;
      uVar13 = param_1[1];
      cVar16 = '\0';
      if (uVar7 <= uVar13) goto LAB_ram_480a8d3e;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = *(byte *)(param_2 + 0x83c8);
      goto LAB_ram_480aa7f0;
    }
LAB_ram_480a8982:
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = *(uint *)(param_2 + 0x83c4);
    if (cVar16 == '\0') goto LAB_ram_480aa7e4;
LAB_ram_480a8996:
    local_28 = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a899a:
    cVar16 = '\0';
LAB_ram_480a899c:
    uStack_24 = 0;
    *(uint *)(param_2 + 0x83c4) =
         (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
         local_28 & 0xff000000;
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = 0;
      goto LAB_ram_480a89d0;
    }
    bVar6 = *(byte *)(*param_1 + uVar5);
    param_1[2] = uVar5 + 1;
    if (bVar6 < 2) goto LAB_ram_480a89d0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(bool *)(param_2 + 0x83c8) = bVar6 != 0;
    if (*(char *)((int)param_1 + 0xd) != '\0') goto LAB_ram_480a89e4;
LAB_ram_480a8b90:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar5 = *(uint *)(param_2 + 0x83dc);
    cVar16 = '\0';
    if ((char)param_1[3] != '\0') {
LAB_ram_480a8ba6:
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
      goto LAB_ram_480a8bac;
    }
LAB_ram_480a8e00:
    if (cVar16 == '\0') {
LAB_ram_480a8e4c:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
    }
    else {
      uVar7 = param_1[2];
      if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 4)) goto LAB_ram_480a8e4c;
      local_28._0_1_ = (byte)uVar5;
      local_28._1_1_ = (byte)(uVar5 >> 8);
      local_28._2_1_ = (byte)(uVar5 >> 0x10);
      local_28._3_1_ = (byte)(uVar5 >> 0x18);
      pbVar9 = (byte *)(*param_1 + uVar7);
      *pbVar9 = (byte)local_28;
      pbVar9[1] = local_28._1_1_;
      pbVar9[2] = local_28._2_1_;
      pbVar9[3] = local_28._3_1_;
      cVar16 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 4;
      local_28 = uVar5;
      if ((char)param_1[3] != '\0') goto LAB_ram_480a8bac;
    }
    uVar13 = *(uint *)(param_2 + 0x83e4);
    uVar7 = *(uint *)(param_2 + 0x83e0);
    *(uint *)(param_2 + 0x83dc) = uVar5;
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    cVar11 = '\0';
    if (cVar16 != '\0') {
      cVar16 = '\0';
      goto LAB_ram_480a8bdc;
    }
LAB_ram_480a8d7a:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar7 = *(uint *)(param_2 + 0x83e8);
    cVar16 = '\0';
    cVar12 = cVar16;
    if (cVar11 != '\0') goto LAB_ram_480a8c44;
LAB_ram_480a8d90:
    cVar16 = '\0';
    local_28 = uVar7;
    if (cVar12 != '\0') {
      uVar5 = param_1[2];
      uVar13 = param_1[1];
      if (uVar13 < uVar5) goto LAB_ram_480a8fc6;
      goto LAB_ram_480a8da0;
    }
LAB_ram_480a8fc6:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    goto LAB_ram_480a8fca;
  }
  pvVar3 = memchr(pvVar18,0,0x10);
  if (pvVar3 != (void *)0x0) {
    uVar5 = (int)pvVar3 - (int)pvVar18;
    local_28 = uVar5;
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar7 = param_1[2];
      if ((uVar7 <= (uint)param_1[1]) && (3 < param_1[1] - uVar7)) {
        local_28._0_1_ = (byte)uVar5;
        local_28._1_1_ = (byte)(uVar5 >> 8);
        local_28._2_1_ = (byte)(uVar5 >> 0x10);
        local_28._3_1_ = (byte)(uVar5 >> 0x18);
        pbVar9 = (byte *)(*param_1 + uVar7);
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        cVar16 = (char)param_1[3];
        param_1[2] = param_1[2] + 4;
        if (cVar16 != '\0') goto LAB_ram_480a8960;
        goto joined_r0x480a897e;
      }
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    goto joined_r0x480a897e;
  }
  uVar5 = *(uint *)(param_2 + 0x83c4);
LAB_ram_480aa7e4:
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  bVar6 = *(byte *)(param_2 + 0x83c8);
LAB_ram_480aa7f0:
  *(uint *)(param_2 + 0x83c4) = uVar5;
LAB_ram_480a89d0:
  *(bool *)(param_2 + 0x83c8) = bVar6 != 0;
  if (*(char *)((int)param_1 + 0xd) == '\0') goto LAB_ram_480a8b90;
LAB_ram_480a89e4:
  uVar5 = param_1[2];
  if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 0x10)) goto LAB_ram_480a8b90;
  if ((char)param_1[3] == '\0') {
    FUN_ram_4ff45158(*param_1 + uVar5,param_2 + 0x83cc,0x10);
  }
  else {
    FUN_ram_4ff45158(param_2 + 0x83cc,*param_1 + uVar5,0x10);
  }
  iVar2 = param_1[2];
  uVar7 = iVar2 + 0x10;
  param_1[2] = uVar7;
  uVar5 = *(uint *)(param_2 + 0x83dc);
  cVar16 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') goto LAB_ram_480a8e00;
  if (((cVar16 == '\0') || ((uint)param_1[1] < uVar7)) || (param_1[1] - uVar7 < 4))
  goto LAB_ram_480a8ba6;
  local_28 = *(uint *)(*param_1 + uVar7);
  param_1[2] = iVar2 + 0x14;
LAB_ram_480a8bac:
  uVar5 = local_28 >> 8;
  uVar7 = local_28 >> 0x10;
  uVar13 = local_28 & 0xff;
  uVar8 = local_28 & 0xff000000;
  uStack_24 = 0;
  local_28 = 0;
  *(uint *)(param_2 + 0x83dc) = (uVar5 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | uVar13 | uVar8;
  if (cVar16 == '\0') {
    uVar7 = *(uint *)(param_2 + 0x83e8);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
LAB_ram_480a8bdc:
    uVar5 = param_1[2];
    cVar11 = cVar16;
    if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 8)) goto LAB_ram_480a8d7a;
    pbVar9 = (byte *)(*param_1 + uVar5);
    if (cVar16 == '\0') {
      *pbVar9 = (byte)local_28;
      pbVar9[1] = local_28._1_1_;
      pbVar9[2] = local_28._2_1_;
      pbVar9[3] = local_28._3_1_;
      pbVar9[4] = (byte)uStack_24;
      pbVar9[5] = uStack_24._1_1_;
      pbVar9[6] = uStack_24._2_1_;
      pbVar9[7] = uStack_24._3_1_;
      cVar16 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 8;
      uVar7 = *(uint *)(param_2 + 0x83e8);
      cVar12 = cVar16;
      if ((char)param_1[3] == '\0') goto LAB_ram_480a8d90;
    }
    else {
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      uVar7 = *(uint *)(param_2 + 0x83e8);
      param_1[2] = uVar5 + 8;
    }
  }
LAB_ram_480a8c44:
  uVar8 = 0;
  uVar5 = 0;
  uVar13 = 0;
  pbVar9 = pbVar10;
  do {
    while( true ) {
      uVar15 = uVar8 - 0x20;
      bVar6 = *pbVar9;
      uVar17 = 0x1f - uVar8;
      if (-1 < (int)uVar15) break;
      uVar15 = uVar8 & 0x1f;
      uVar8 = uVar8 + 8;
      uVar5 = uVar5 | (uint)bVar6 << uVar15;
      uVar13 = uVar13 | (byte)((bVar6 >> 1) >> (uVar17 & 0x1f));
      pbVar9 = pbVar9 + 1;
      if (uVar8 == 0x40) goto LAB_ram_480a8c92;
    }
    uVar8 = uVar8 + 8;
    uVar13 = uVar13 | (uint)bVar6 << (uVar15 & 0x1f);
    pbVar9 = pbVar9 + 1;
  } while (uVar8 != 0x40);
LAB_ram_480a8c92:
  local_28 = 0;
  *(uint *)(param_2 + 0x83e0) = uVar5;
  *(uint *)(param_2 + 0x83e4) = uVar13;
  if (cVar16 == '\0') {
LAB_ram_480a8cae:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a8ddc:
    uVar7 = (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
            local_28 & 0xff000000;
  }
  else {
    uVar5 = param_1[2];
    uVar13 = param_1[1];
    if (uVar13 < uVar5) goto LAB_ram_480a8cae;
LAB_ram_480a8da0:
    if (3 < uVar13 - uVar5) {
      puVar14 = (uint *)(*param_1 + uVar5);
      if (cVar16 == '\0') {
        *(byte *)puVar14 = (byte)local_28;
        *(byte *)((int)puVar14 + 1) = local_28._1_1_;
        *(byte *)((int)puVar14 + 2) = local_28._2_1_;
        *(byte *)((int)puVar14 + 3) = local_28._3_1_;
        param_1[2] = param_1[2] + 4;
        if ((char)param_1[3] == '\0') goto LAB_ram_480a8fca;
      }
      else {
        local_28 = *puVar14;
        param_1[2] = uVar5 + 4;
      }
      goto LAB_ram_480a8ddc;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar16 != '\0') goto LAB_ram_480a8ddc;
  }
LAB_ram_480a8fca:
  uStack_24 = 0;
  *(uint *)(param_2 + 0x83e8) = uVar7;
  FUN_ram_480a7960(param_1,param_2 + 0x83ec);
  uVar4 = *(undefined1 *)(param_2 + 0x8430);
  cVar16 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') {
    if (cVar16 != '\0') {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        *(undefined1 *)(param_1[2] + *param_1) = uVar4;
        param_1[2] = param_1[2] + 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
LAB_ram_480a9168:
    *(undefined1 *)(param_2 + 0x8430) = uVar4;
    if (*(char *)((int)param_1 + 0xd) == '\0') goto LAB_ram_480a902e;
LAB_ram_480a9178:
    uVar5 = param_1[2];
    if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 0x10)) goto LAB_ram_480a902e;
    if ((char)param_1[3] == '\0') {
      FUN_ram_4ff45158(*param_1 + uVar5,param_2 + 0x8434,0x10);
    }
    else {
      FUN_ram_4ff45158(param_2 + 0x8434,*param_1 + uVar5,0x10);
    }
    iVar2 = param_1[2];
    uVar5 = iVar2 + 0x10;
    param_1[2] = uVar5;
    uVar7 = *(uint *)(param_2 + 0x8444);
    cVar16 = *(char *)((int)param_1 + 0xd);
    if ((char)param_1[3] == '\0') goto LAB_ram_480a9268;
    if (((cVar16 == '\0') || ((uint)param_1[1] < uVar5)) || (param_1[1] - uVar5 < 4))
    goto LAB_ram_480a9044;
    local_28 = *(uint *)(*param_1 + uVar5);
    param_1[2] = iVar2 + 0x14;
LAB_ram_480a904a:
    uVar5 = local_28 >> 8;
    uVar7 = local_28 >> 0x10;
    uVar13 = local_28 & 0xff;
    uVar8 = local_28 & 0xff000000;
    uStack_24 = 0;
    local_28 = 0;
    *(uint *)(param_2 + 0x8444) = (uVar5 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | uVar13 | uVar8;
    if (cVar16 == '\0') {
      uVar5 = *(uint *)(param_2 + 0x8450);
      *(undefined1 *)((int)param_1 + 0xd) = 0;
    }
    else {
LAB_ram_480a907a:
      uVar7 = param_1[2];
      cVar11 = cVar16;
      if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 8)) goto LAB_ram_480a9204;
      pbVar9 = (byte *)(*param_1 + uVar7);
      if (cVar16 == '\0') {
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[6] = uStack_24._2_1_;
        pbVar9[7] = uStack_24._3_1_;
        cVar16 = *(char *)((int)param_1 + 0xd);
        param_1[2] = param_1[2] + 8;
        uVar5 = *(uint *)(param_2 + 0x8450);
        cVar12 = cVar16;
        if ((char)param_1[3] == '\0') goto LAB_ram_480a921a;
      }
      else {
        local_28 = *(uint *)pbVar9;
        uStack_24 = *(undefined4 *)(pbVar9 + 4);
        uVar5 = *(uint *)(param_2 + 0x8450);
        param_1[2] = uVar7 + 8;
      }
    }
LAB_ram_480a90e2:
    uVar8 = 0;
    uVar7 = 0;
    uVar13 = 0;
    pbVar9 = pbVar10;
    do {
      while( true ) {
        uVar15 = uVar8 - 0x20;
        bVar6 = *pbVar9;
        uVar17 = 0x1f - uVar8;
        if (-1 < (int)uVar15) break;
        uVar15 = uVar8 & 0x1f;
        uVar8 = uVar8 + 8;
        uVar7 = uVar7 | (uint)bVar6 << uVar15;
        uVar13 = uVar13 | (byte)((bVar6 >> 1) >> (uVar17 & 0x1f));
        pbVar9 = pbVar9 + 1;
        if (uVar8 == 0x40) goto LAB_ram_480a9130;
      }
      uVar8 = uVar8 + 8;
      uVar13 = uVar13 | (uint)bVar6 << (uVar15 & 0x1f);
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0x40);
LAB_ram_480a9130:
    local_28 = 0;
    *(uint *)(param_2 + 0x8448) = uVar7;
    *(uint *)(param_2 + 0x844c) = uVar13;
    if (cVar16 != '\0') {
      uVar7 = param_1[2];
      uVar13 = param_1[1];
      if (uVar7 <= uVar13) goto LAB_ram_480a9228;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480aaeb8:
    uVar5 = (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
            local_28 & 0xff000000;
  }
  else {
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      uVar4 = 0;
      goto LAB_ram_480a9168;
    }
    bVar6 = *(byte *)(*param_1 + uVar5);
    param_1[2] = uVar5 + 1;
    if (bVar6 < 2) {
      uVar4 = bVar6 != 0;
      goto LAB_ram_480a9168;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(char *)(param_2 + 0x8430) = cVar16;
    if (*(char *)((int)param_1 + 0xd) != '\0') goto LAB_ram_480a9178;
LAB_ram_480a902e:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar7 = *(uint *)(param_2 + 0x8444);
    cVar16 = '\0';
    if ((char)param_1[3] != '\0') {
LAB_ram_480a9044:
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
      goto LAB_ram_480a904a;
    }
LAB_ram_480a9268:
    if (cVar16 == '\0') {
LAB_ram_480a92b4:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
    }
    else {
      uVar5 = param_1[2];
      if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 4)) goto LAB_ram_480a92b4;
      local_28._0_1_ = (byte)uVar7;
      local_28._1_1_ = (byte)(uVar7 >> 8);
      local_28._2_1_ = (byte)(uVar7 >> 0x10);
      local_28._3_1_ = (byte)(uVar7 >> 0x18);
      pbVar9 = (byte *)(*param_1 + uVar5);
      *pbVar9 = (byte)local_28;
      pbVar9[1] = local_28._1_1_;
      pbVar9[2] = local_28._2_1_;
      pbVar9[3] = local_28._3_1_;
      cVar16 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 4;
      local_28 = uVar7;
      if ((char)param_1[3] != '\0') goto LAB_ram_480a904a;
    }
    uVar8 = *(uint *)(param_2 + 0x844c);
    uVar13 = *(uint *)(param_2 + 0x8448);
    *(uint *)(param_2 + 0x8444) = uVar7;
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar13 >> (uVar5 & 0x1f)) | (byte)((uVar8 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar8 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    cVar11 = '\0';
    if (cVar16 != '\0') {
      cVar16 = '\0';
      goto LAB_ram_480a907a;
    }
LAB_ram_480a9204:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar5 = *(uint *)(param_2 + 0x8450);
    cVar16 = '\0';
    cVar12 = cVar16;
    if (cVar11 != '\0') goto LAB_ram_480a90e2;
LAB_ram_480a921a:
    cVar16 = '\0';
    if (cVar12 == '\0') {
LAB_ram_480a930a:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      local_28 = uVar5;
    }
    else {
      uVar7 = param_1[2];
      uVar13 = param_1[1];
      local_28 = uVar5;
      if (uVar13 < uVar7) goto LAB_ram_480a930a;
LAB_ram_480a9228:
      if (uVar13 - uVar7 < 4) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
      else {
        puVar14 = (uint *)(*param_1 + uVar7);
        if (cVar16 != '\0') {
          local_28 = *puVar14;
          param_1[2] = uVar7 + 4;
          goto LAB_ram_480aaeb8;
        }
        *(byte *)puVar14 = (byte)local_28;
        *(byte *)((int)puVar14 + 1) = local_28._1_1_;
        *(byte *)((int)puVar14 + 2) = local_28._2_1_;
        *(byte *)((int)puVar14 + 3) = local_28._3_1_;
        cVar16 = (char)param_1[3];
        param_1[2] = param_1[2] + 4;
      }
      if (cVar16 != '\0') goto LAB_ram_480aaeb8;
    }
  }
  uStack_24 = 0;
  *(uint *)(param_2 + 0x8450) = uVar5;
  FUN_ram_480a7960(param_1,param_2 + 0x8454);
  FUN_ram_480a7ad2(param_1,param_2 + 0x8498);
  FUN_ram_480a7ad2(param_1,param_2 + 0x8510);
  cVar16 = (char)param_1[3];
  local_28 = 0;
  uStack_24 = 0;
  if (cVar16 == '\0') {
    uVar13 = *(uint *)(param_2 + 0x858c);
    uVar5 = *(uint *)(param_2 + 0x8588);
    uVar7 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar5 >> (uVar7 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar7 & 0x1f));
      if (-1 < (int)(uVar7 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar7 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar7 = uVar7 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar7 != 0x40);
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      if (uVar5 <= uVar7) goto LAB_ram_480a9362;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = '\0';
LAB_ram_480a9414:
    uVar13 = *(uint *)(param_2 + 0x8594);
    uVar7 = *(uint *)(param_2 + 0x8590);
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    cVar16 = '\0';
    if (cVar11 != '\0') {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      cVar16 = '\0';
      if (uVar5 <= uVar7) goto LAB_ram_480a9464;
    }
LAB_ram_480a952a:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = cVar16;
    cVar16 = '\0';
LAB_ram_480a9530:
    if (cVar11 != '\0') goto LAB_ram_480a94ba;
    uVar13 = *(uint *)(param_2 + 0x859c);
    uVar7 = *(uint *)(param_2 + 0x8598);
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    if (cVar16 != '\0') {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      cVar16 = '\0';
      if (uVar7 < uVar5) {
        cVar16 = '\0';
        goto LAB_ram_480a964e;
      }
      goto LAB_ram_480a9584;
    }
LAB_ram_480a964e:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = cVar16;
    cVar16 = '\0';
LAB_ram_480a9654:
    if (cVar11 != '\0') goto LAB_ram_480a95dc;
    uVar13 = *(uint *)(param_2 + 0x85a4);
    uVar7 = *(uint *)(param_2 + 0x85a0);
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    if (cVar16 != '\0') {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      cVar16 = '\0';
      if (uVar7 < uVar5) goto LAB_ram_480a9854;
      goto LAB_ram_480a96aa;
    }
LAB_ram_480a9854:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    bVar6 = *(byte *)(param_2 + 0x85a8);
    goto LAB_ram_480a9860;
  }
  if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480ab432:
    cVar16 = '\0';
  }
  else {
    uVar5 = param_1[2];
    uVar7 = param_1[1];
    if (uVar7 < uVar5) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto LAB_ram_480ab432;
    }
LAB_ram_480a9362:
    if (uVar7 - uVar5 < 8) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar11 = '\0';
LAB_ram_480aae08:
      bVar1 = cVar16 == '\0';
      cVar16 = cVar11;
      if (bVar1) goto LAB_ram_480a9414;
    }
    else {
      pbVar9 = (byte *)(*param_1 + uVar5);
      if (cVar16 == '\0') {
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[6] = uStack_24._2_1_;
        pbVar9[7] = uStack_24._3_1_;
        cVar16 = (char)param_1[3];
        cVar11 = *(char *)((int)param_1 + 0xd);
        param_1[2] = param_1[2] + 8;
        goto LAB_ram_480aae08;
      }
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      param_1[2] = uVar5 + 8;
    }
  }
  uVar7 = 0;
  uVar13 = 0;
  uVar5 = 0;
  pbVar9 = pbVar10;
  do {
    while( true ) {
      uVar8 = uVar7 - 0x20;
      bVar6 = *pbVar9;
      uVar15 = 0x1f - uVar7;
      if (-1 < (int)uVar8) break;
      uVar8 = uVar7 & 0x1f;
      uVar7 = uVar7 + 8;
      uVar13 = uVar13 | (uint)bVar6 << uVar8;
      uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
      pbVar9 = pbVar9 + 1;
      if (uVar7 == 0x40) goto LAB_ram_480aae5e;
    }
    uVar7 = uVar7 + 8;
    uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
    pbVar9 = pbVar9 + 1;
  } while (uVar7 != 0x40);
LAB_ram_480aae5e:
  local_28 = 0;
  uStack_24 = 0;
  *(uint *)(param_2 + 0x8588) = uVar13;
  *(uint *)(param_2 + 0x858c) = uVar5;
  if (cVar16 != '\0') {
    uVar5 = param_1[2];
    uVar7 = param_1[1];
    if (uVar5 <= uVar7) {
LAB_ram_480a9464:
      if (uVar7 - uVar5 < 8) goto LAB_ram_480a952a;
      pbVar9 = (byte *)(*param_1 + uVar5);
      if (cVar16 == '\0') {
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[6] = uStack_24._2_1_;
        pbVar9[7] = uStack_24._3_1_;
        param_1[2] = param_1[2] + 8;
        cVar11 = (char)param_1[3];
        cVar16 = *(char *)((int)param_1 + 0xd);
        goto LAB_ram_480a9530;
      }
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      param_1[2] = uVar5 + 8;
      goto LAB_ram_480a94ba;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  cVar16 = '\0';
LAB_ram_480a94ba:
  uVar7 = 0;
  uVar13 = 0;
  uVar5 = 0;
  pbVar9 = pbVar10;
  do {
    while( true ) {
      uVar8 = uVar7 - 0x20;
      bVar6 = *pbVar9;
      uVar15 = 0x1f - uVar7;
      if (-1 < (int)uVar8) break;
      uVar8 = uVar7 & 0x1f;
      uVar7 = uVar7 + 8;
      uVar13 = uVar13 | (uint)bVar6 << uVar8;
      uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
      pbVar9 = pbVar9 + 1;
      if (uVar7 == 0x40) goto LAB_ram_480a9508;
    }
    uVar7 = uVar7 + 8;
    uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
    pbVar9 = pbVar9 + 1;
  } while (uVar7 != 0x40);
LAB_ram_480a9508:
  local_28 = 0;
  uStack_24 = 0;
  *(uint *)(param_2 + 0x8590) = uVar13;
  *(uint *)(param_2 + 0x8594) = uVar5;
  if (cVar16 != '\0') {
    uVar5 = param_1[2];
    uVar7 = param_1[1];
    if (uVar5 <= uVar7) {
LAB_ram_480a9584:
      if (uVar7 - uVar5 < 8) goto LAB_ram_480a964e;
      pbVar9 = (byte *)(*param_1 + uVar5);
      if (cVar16 == '\0') {
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[6] = uStack_24._2_1_;
        pbVar9[7] = uStack_24._3_1_;
        param_1[2] = param_1[2] + 8;
        cVar11 = (char)param_1[3];
        cVar16 = *(char *)((int)param_1 + 0xd);
        goto LAB_ram_480a9654;
      }
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      param_1[2] = uVar5 + 8;
      goto LAB_ram_480a95dc;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  cVar16 = '\0';
LAB_ram_480a95dc:
  uVar7 = 0;
  uVar13 = 0;
  uVar5 = 0;
  pbVar9 = pbVar10;
  do {
    while( true ) {
      uVar8 = uVar7 - 0x20;
      bVar6 = *pbVar9;
      uVar15 = 0x1f - uVar7;
      if (-1 < (int)uVar8) break;
      uVar8 = uVar7 & 0x1f;
      uVar7 = uVar7 + 8;
      uVar13 = uVar13 | (uint)bVar6 << uVar8;
      uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
      pbVar9 = pbVar9 + 1;
      if (uVar7 == 0x40) goto LAB_ram_480a962a;
    }
    uVar7 = uVar7 + 8;
    uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
    pbVar9 = pbVar9 + 1;
  } while (uVar7 != 0x40);
LAB_ram_480a962a:
  local_28 = 0;
  uStack_24 = 0;
  *(uint *)(param_2 + 0x8598) = uVar13;
  *(uint *)(param_2 + 0x859c) = uVar5;
  if (cVar16 == '\0') {
LAB_ram_480a9644:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a9648:
    cVar16 = '\0';
LAB_ram_480a9704:
    uVar7 = 0;
    uVar13 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      while( true ) {
        uVar8 = uVar7 - 0x20;
        bVar6 = *pbVar9;
        uVar15 = 0x1f - uVar7;
        if (-1 < (int)uVar8) break;
        uVar8 = uVar7 & 0x1f;
        uVar7 = uVar7 + 8;
        uVar13 = uVar13 | (uint)bVar6 << uVar8;
        uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
        pbVar9 = pbVar9 + 1;
        if (uVar7 == 0x40) goto LAB_ram_480a9752;
      }
      uVar7 = uVar7 + 8;
      uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
      pbVar9 = pbVar9 + 1;
    } while (uVar7 != 0x40);
LAB_ram_480a9752:
    *(uint *)(param_2 + 0x85a0) = uVar13;
    *(uint *)(param_2 + 0x85a4) = uVar5;
    if ((cVar16 != '\0') && (uVar5 = param_1[2], uVar5 < (uint)param_1[1])) {
      bVar6 = *(byte *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (1 < bVar6) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
      goto LAB_ram_480a9860;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)(param_2 + 0x85a8) = 0;
    cVar16 = *(char *)((int)param_1 + 0xd);
    cVar11 = cVar16;
    cVar12 = *(char *)(param_2 + 0x85a9);
    if ((char)param_1[3] != '\0') goto LAB_ram_480a987a;
LAB_ram_480a978c:
    cVar16 = cVar12;
    if (cVar11 != '\0') {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        *(char *)(param_1[2] + *param_1) = cVar16;
        param_1[2] = param_1[2] + 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
  else {
    uVar5 = param_1[2];
    uVar7 = param_1[1];
    if (uVar7 < uVar5) goto LAB_ram_480a9644;
LAB_ram_480a96aa:
    if (7 < uVar7 - uVar5) {
      pbVar9 = (byte *)(*param_1 + uVar5);
      if (cVar16 == '\0') {
        pbVar9[6] = uStack_24._2_1_;
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[7] = uStack_24._3_1_;
        uVar5 = param_1[2] + 8;
        param_1[2] = uVar5;
        cVar16 = *(char *)((int)param_1 + 0xd);
        bVar6 = *(byte *)(param_2 + 0x85a8);
        if ((char)param_1[3] == '\0') {
          if (cVar16 != '\0') {
            if (uVar5 < (uint)param_1[1]) {
              *(byte *)(uVar5 + *param_1) = bVar6;
              param_1[2] = param_1[2] + 1;
            }
            else {
              *(undefined1 *)((int)param_1 + 0xd) = 0;
            }
          }
          goto LAB_ram_480a9860;
        }
      }
      else {
        local_28 = *(uint *)pbVar9;
        uStack_24 = *(undefined4 *)(pbVar9 + 4);
        param_1[2] = uVar5 + 8;
      }
      goto LAB_ram_480a9704;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar16 != '\0') goto LAB_ram_480a9648;
    bVar6 = *(byte *)(param_2 + 0x85a8);
LAB_ram_480a9860:
    *(bool *)(param_2 + 0x85a8) = bVar6 != 0;
    cVar16 = *(char *)((int)param_1 + 0xd);
    cVar11 = cVar16;
    cVar12 = *(char *)(param_2 + 0x85a9);
    if ((char)param_1[3] == '\0') goto LAB_ram_480a978c;
LAB_ram_480a987a:
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
    }
    else {
      bVar6 = *(byte *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (bVar6 < 2) {
        cVar16 = bVar6 != 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
  *(char *)(param_2 + 0x85a9) = cVar16;
  FUN_ram_480a7960(param_1,param_2 + 0x85aa);
  FUN_ram_480a816e(param_1,param_2 + 0x85eb);
  FUN_ram_480a816e(param_1,param_2 + 0x8604);
  cVar16 = (char)param_1[3];
  local_28 = 0;
  uStack_24 = 0;
  if (cVar16 == '\0') {
    uVar13 = *(uint *)(param_2 + 0x8624);
    uVar7 = *(uint *)(param_2 + 0x8620);
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      if (uVar5 <= uVar7) goto LAB_ram_480a97f4;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar16 = '\0';
LAB_ram_480a98fa:
    uVar13 = *(uint *)(param_2 + 0x862c);
    uVar5 = *(uint *)(param_2 + 0x8628);
    local_28 = 0;
    uStack_24 = 0;
    uVar7 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar5 >> (uVar7 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar7 & 0x1f));
      if (-1 < (int)(uVar7 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar7 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar7 = uVar7 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar7 != 0x40);
    if (cVar16 == '\0') {
LAB_ram_480a9a1a:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = *(byte *)(param_2 + 0x8630);
    }
    else {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      cVar16 = '\0';
      if (uVar7 < uVar5) goto LAB_ram_480a9a1a;
LAB_ram_480a994c:
      if (7 < uVar7 - uVar5) {
        pbVar9 = (byte *)(*param_1 + uVar5);
        if (cVar16 == '\0') {
          pbVar9[6] = uStack_24._2_1_;
          *pbVar9 = (byte)local_28;
          pbVar9[1] = local_28._1_1_;
          pbVar9[2] = local_28._2_1_;
          pbVar9[3] = local_28._3_1_;
          pbVar9[4] = (byte)uStack_24;
          pbVar9[5] = uStack_24._1_1_;
          pbVar9[7] = uStack_24._3_1_;
          uVar5 = param_1[2] + 8;
          param_1[2] = uVar5;
          cVar16 = *(char *)((int)param_1 + 0xd);
          bVar6 = *(byte *)(param_2 + 0x8630);
          if ((char)param_1[3] == '\0') {
            if (cVar16 != '\0') {
              if (uVar5 < (uint)param_1[1]) {
                *(byte *)(uVar5 + *param_1) = bVar6;
                param_1[2] = param_1[2] + 1;
              }
              else {
                *(undefined1 *)((int)param_1 + 0xd) = 0;
              }
            }
            goto LAB_ram_480a9a26;
          }
        }
        else {
          local_28 = *(uint *)pbVar9;
          uStack_24 = *(undefined4 *)(pbVar9 + 4);
          param_1[2] = uVar5 + 8;
        }
        goto LAB_ram_480a99a8;
      }
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      if (cVar16 != '\0') goto LAB_ram_480aac9c;
      bVar6 = *(byte *)(param_2 + 0x8630);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480ab442:
      cVar16 = '\0';
    }
    else {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      if (uVar7 < uVar5) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        goto LAB_ram_480ab442;
      }
LAB_ram_480a97f4:
      if (uVar7 - uVar5 < 8) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        cVar11 = cVar16;
        cVar16 = '\0';
LAB_ram_480aac20:
        if (cVar11 == '\0') goto LAB_ram_480a98fa;
      }
      else {
        pbVar9 = (byte *)(*param_1 + uVar5);
        if (cVar16 == '\0') {
          *pbVar9 = (byte)local_28;
          pbVar9[1] = local_28._1_1_;
          pbVar9[2] = local_28._2_1_;
          pbVar9[3] = local_28._3_1_;
          pbVar9[4] = (byte)uStack_24;
          pbVar9[5] = uStack_24._1_1_;
          pbVar9[6] = uStack_24._2_1_;
          pbVar9[7] = uStack_24._3_1_;
          cVar11 = (char)param_1[3];
          cVar16 = *(char *)((int)param_1 + 0xd);
          param_1[2] = param_1[2] + 8;
          goto LAB_ram_480aac20;
        }
        local_28 = *(uint *)pbVar9;
        uStack_24 = *(undefined4 *)(pbVar9 + 4);
        param_1[2] = uVar5 + 8;
      }
    }
    uVar13 = 0;
    uVar5 = 0;
    uVar7 = 0;
    pbVar9 = pbVar10;
    do {
      while( true ) {
        uVar8 = uVar13 - 0x20;
        bVar6 = *pbVar9;
        uVar15 = 0x1f - uVar13;
        if (-1 < (int)uVar8) break;
        uVar8 = uVar13 & 0x1f;
        uVar13 = uVar13 + 8;
        uVar5 = uVar5 | (uint)bVar6 << uVar8;
        uVar7 = uVar7 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
        pbVar9 = pbVar9 + 1;
        if (uVar13 == 0x40) goto LAB_ram_480aac78;
      }
      uVar13 = uVar13 + 8;
      uVar7 = uVar7 | (uint)bVar6 << (uVar8 & 0x1f);
      pbVar9 = pbVar9 + 1;
    } while (uVar13 != 0x40);
LAB_ram_480aac78:
    local_28 = 0;
    uStack_24 = 0;
    *(uint *)(param_2 + 0x8620) = uVar5;
    *(uint *)(param_2 + 0x8624) = uVar7;
    if (cVar16 != '\0') {
      uVar5 = param_1[2];
      uVar7 = param_1[1];
      if (uVar5 <= uVar7) goto LAB_ram_480a994c;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480aac9c:
    cVar16 = '\0';
LAB_ram_480a99a8:
    uVar13 = 0;
    uVar5 = 0;
    uVar7 = 0;
    pbVar9 = pbVar10;
    do {
      while( true ) {
        uVar8 = uVar13 - 0x20;
        bVar6 = *pbVar9;
        uVar15 = 0x1f - uVar13;
        if (-1 < (int)uVar8) break;
        uVar8 = uVar13 & 0x1f;
        uVar13 = uVar13 + 8;
        uVar5 = uVar5 | (uint)bVar6 << uVar8;
        uVar7 = uVar7 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
        pbVar9 = pbVar9 + 1;
        if (uVar13 == 0x40) goto LAB_ram_480a99f6;
      }
      uVar13 = uVar13 + 8;
      uVar7 = uVar7 | (uint)bVar6 << (uVar8 & 0x1f);
      pbVar9 = pbVar9 + 1;
    } while (uVar13 != 0x40);
LAB_ram_480a99f6:
    *(uint *)(param_2 + 0x8628) = uVar5;
    *(uint *)(param_2 + 0x862c) = uVar7;
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (1 < bVar6) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
LAB_ram_480a9a26:
  *(bool *)(param_2 + 0x8630) = bVar6 != 0;
  FUN_ram_480a7960(param_1,param_2 + 0x8631);
  cVar16 = (char)param_1[3];
  local_28 = 0;
  uStack_24 = 0;
  if (cVar16 == '\0') {
    uVar13 = *(uint *)(param_2 + 0x867c);
    uVar7 = *(uint *)(param_2 + 0x8678);
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar5 = param_1[2];
      if (uVar5 <= (uint)param_1[1]) {
        if (7 < param_1[1] - uVar5) goto LAB_ram_480a9a68;
LAB_ram_480a9bd6:
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        if (cVar16 != '\0') goto LAB_ram_480a9bde;
      }
    }
LAB_ram_480a9ac8:
    uVar7 = *(uint *)(param_2 + 0x8690);
    cVar11 = '\0';
    local_28 = uVar7;
    goto LAB_ram_480a9ad4;
  }
  if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480a9bde:
    cVar16 = '\0';
LAB_ram_480a9be0:
    uVar7 = 0;
    uVar13 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      while( true ) {
        uVar8 = uVar7 - 0x20;
        bVar6 = *pbVar9;
        uVar15 = 0x1f - uVar7;
        if (-1 < (int)uVar8) break;
        uVar8 = uVar7 & 0x1f;
        uVar7 = uVar7 + 8;
        uVar13 = uVar13 | (uint)bVar6 << uVar8;
        uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
        pbVar9 = pbVar9 + 1;
        if (uVar7 == 0x40) goto LAB_ram_480a9c2e;
      }
      uVar7 = uVar7 + 8;
      uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
      pbVar9 = pbVar9 + 1;
    } while (uVar7 != 0x40);
LAB_ram_480a9c2e:
    *(uint *)(param_2 + 0x8678) = uVar13;
    *(uint *)(param_2 + 0x867c) = uVar5;
    if (cVar16 != '\0') {
      uVar5 = param_1[2];
      goto LAB_ram_480a9c3e;
    }
    cVar16 = '\x01';
LAB_ram_480a9cc4:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar7 = *(uint *)(param_2 + 0x8690);
    cVar11 = '\0';
    if (cVar16 != '\0') {
LAB_ram_480a9cd8:
      uStack_24 = 0;
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a9cdc:
      cVar11 = '\0';
      goto LAB_ram_480a9cde;
    }
LAB_ram_480a9eee:
    uStack_24 = 0;
    bVar1 = cVar11 != '\0';
    cVar11 = '\0';
    local_28 = uVar7;
    if (bVar1) {
      uVar5 = param_1[2];
      if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 4)) {
        cVar11 = '\0';
        goto LAB_ram_480a9ad4;
      }
      local_28._2_1_ = (byte)(uVar7 >> 0x10);
      local_28._0_1_ = (byte)uVar7;
      local_28._1_1_ = (byte)(uVar7 >> 8);
      pbVar9 = (byte *)(uVar5 + *param_1);
      *pbVar9 = (byte)local_28;
      pbVar9[1] = local_28._1_1_;
      pbVar9[2] = local_28._2_1_;
      pbVar9[3] = (byte)(uVar7 >> 0x18);
      cVar11 = *(char *)((int)param_1 + 0xd);
      uVar5 = param_1[2] + 4;
      param_1[2] = uVar5;
      if ((char)param_1[3] != '\0') goto LAB_ram_480a9cde;
      *(uint *)(param_2 + 0x8690) = uVar7;
      if (cVar11 == '\0') goto LAB_ram_480a9ae4;
      uVar7 = param_1[1];
      cVar11 = '\0';
      if (uVar5 <= uVar7) goto LAB_ram_480a9d10;
      goto LAB_ram_480a9f70;
    }
LAB_ram_480a9ad4:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar11 != '\0') goto LAB_ram_480a9cdc;
    *(uint *)(param_2 + 0x8690) = uVar7;
LAB_ram_480a9ae4:
    uVar5 = *(uint *)(param_2 + 0x86a4);
    cVar16 = '\0';
    local_28 = uVar5;
LAB_ram_480a9af0:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar16 != '\0') {
LAB_ram_480a9f8a:
      cVar16 = '\0';
      goto LAB_ram_480a9d98;
    }
    uVar4 = *(undefined1 *)(param_2 + 0x86a8);
    *(uint *)(param_2 + 0x86a4) = uVar5;
LAB_ram_480a9b04:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)(param_2 + 0x86a8) = uVar4;
    uVar4 = *(undefined1 *)(param_2 + 0x86a9);
LAB_ram_480a9b14:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a9b18:
    *(undefined1 *)(param_2 + 0x86a9) = uVar4;
    cVar16 = *(char *)((int)param_1 + 0xd);
    if ((char)param_1[3] == '\0') goto LAB_ram_480a9dec;
LAB_ram_480a9b2c:
    if (cVar16 == '\0') {
LAB_ram_480a9b3a:
      uVar4 = 0;
    }
    else {
      uVar5 = param_1[2];
      if ((uint)param_1[1] <= uVar5) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        goto LAB_ram_480a9b3a;
      }
      uVar4 = *(undefined1 *)(uVar5 + *param_1);
      param_1[2] = uVar5 + 1;
    }
LAB_ram_480a9b3c:
    *(undefined1 *)(param_2 + 0x86aa) = uVar4;
    cVar16 = *(char *)((int)param_1 + 0xd);
    cVar11 = cVar16;
    cVar12 = *(char *)(param_2 + 0x86ab);
    if ((char)param_1[3] == '\0') goto LAB_ram_480a9e18;
LAB_ram_480a9b54:
    if ((cVar16 == '\0') || (uVar5 = param_1[2], (uint)param_1[1] <= uVar5)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar16 = '\0';
    }
    else {
      bVar6 = *(byte *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (bVar6 < 2) {
        cVar16 = bVar6 != 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
  else {
    uVar5 = param_1[2];
    if ((uint)param_1[1] < uVar5) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto LAB_ram_480a9bde;
    }
    if (param_1[1] - uVar5 < 8) goto LAB_ram_480a9bd6;
LAB_ram_480a9a68:
    pbVar9 = (byte *)(*param_1 + uVar5);
    if (cVar16 != '\0') {
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      param_1[2] = uVar5 + 8;
      goto LAB_ram_480a9be0;
    }
    *pbVar9 = (byte)local_28;
    pbVar9[1] = local_28._1_1_;
    pbVar9[2] = local_28._2_1_;
    pbVar9[3] = local_28._3_1_;
    pbVar9[4] = (byte)uStack_24;
    pbVar9[5] = uStack_24._1_1_;
    pbVar9[6] = uStack_24._2_1_;
    pbVar9[7] = uStack_24._3_1_;
    cVar16 = *(char *)((int)param_1 + 0xd);
    uVar5 = param_1[2] + 8;
    param_1[2] = uVar5;
    if ((char)param_1[3] != '\0') goto LAB_ram_480a9be0;
    bVar1 = cVar16 == '\0';
    cVar16 = '\0';
    if (bVar1) goto LAB_ram_480a9ac8;
LAB_ram_480a9c3e:
    if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 0x10)) goto LAB_ram_480a9cc4;
    if (cVar16 == '\0') {
      FUN_ram_4ff45158(*param_1 + uVar5,param_2 + 0x8680,0x10);
    }
    else {
      FUN_ram_4ff45158(param_2 + 0x8680,*param_1 + uVar5,0x10);
    }
    iVar2 = param_1[2];
    uVar5 = iVar2 + 0x10;
    local_28 = 0;
    uStack_24 = 0;
    param_1[2] = uVar5;
    uVar7 = *(uint *)(param_2 + 0x8690);
    cVar11 = *(char *)((int)param_1 + 0xd);
    if ((char)param_1[3] == '\0') goto LAB_ram_480a9eee;
    if ((cVar11 == '\0') || ((uint)param_1[1] < uVar5)) goto LAB_ram_480a9cd8;
    if (param_1[1] - uVar5 < 4) goto LAB_ram_480a9ad4;
    local_28 = *(uint *)(*param_1 + uVar5);
    param_1[2] = iVar2 + 0x14;
LAB_ram_480a9cde:
    *(uint *)(param_2 + 0x8690) =
         (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
         local_28 & 0xff000000;
    if (cVar11 == '\0') {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a9f86:
      uStack_24 = 0;
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto LAB_ram_480a9f8a;
    }
    uVar5 = param_1[2];
    uVar7 = param_1[1];
    if (uVar7 < uVar5) {
LAB_ram_480a9f70:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      uVar5 = *(uint *)(param_2 + 0x86a4);
      if (cVar11 != '\0') goto LAB_ram_480a9f86;
      cVar16 = '\0';
LAB_ram_480ab05e:
      uStack_24 = 0;
      local_28 = uVar5;
      if (cVar16 == '\0') {
        cVar16 = '\0';
        goto LAB_ram_480a9af0;
      }
      uVar7 = param_1[2];
      cVar16 = '\0';
    }
    else {
LAB_ram_480a9d10:
      if (uVar7 - uVar5 < 0x10) goto LAB_ram_480a9f70;
      if (cVar11 == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar5,param_2 + 0x8694,0x10);
      }
      else {
        FUN_ram_4ff45158(param_2 + 0x8694,*param_1 + uVar5,0x10);
      }
      uVar7 = param_1[2] + 0x10;
      local_28 = 0;
      param_1[2] = uVar7;
      uVar5 = *(uint *)(param_2 + 0x86a4);
      cVar16 = *(char *)((int)param_1 + 0xd);
      if ((char)param_1[3] == '\0') goto LAB_ram_480ab05e;
      if (cVar16 == '\0') goto LAB_ram_480a9f86;
    }
    uStack_24 = 0;
    if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 4)) goto LAB_ram_480a9af0;
    puVar14 = (uint *)(*param_1 + uVar7);
    if (cVar16 == '\0') {
      *(byte *)((int)puVar14 + 1) = local_28._1_1_;
      *(byte *)puVar14 = (byte)local_28;
      *(byte *)((int)puVar14 + 2) = local_28._2_1_;
      *(byte *)((int)puVar14 + 3) = local_28._3_1_;
      cVar16 = *(char *)((int)param_1 + 0xd);
      uVar7 = param_1[2] + 4;
      param_1[2] = uVar7;
      if ((char)param_1[3] != '\0') goto LAB_ram_480a9d98;
      *(uint *)(param_2 + 0x86a4) = uVar5;
      uVar4 = *(undefined1 *)(param_2 + 0x86a8);
      if (cVar16 == '\0') goto LAB_ram_480a9b04;
      if ((uint)param_1[1] <= uVar7) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        *(undefined1 *)(param_2 + 0x86a8) = uVar4;
        uVar4 = *(undefined1 *)(param_2 + 0x86a9);
        goto LAB_ram_480a9b14;
      }
      *(undefined1 *)(uVar7 + *param_1) = uVar4;
      cVar16 = *(char *)((int)param_1 + 0xd);
      uVar5 = param_1[2] + 1;
      param_1[2] = uVar5;
      if ((char)param_1[3] == '\0') {
        *(undefined1 *)(param_2 + 0x86a8) = uVar4;
        uVar4 = *(undefined1 *)(param_2 + 0x86a9);
        if ((cVar16 == '\0') || ((uint)param_1[1] <= uVar5)) goto LAB_ram_480a9b14;
        *(undefined1 *)(uVar5 + *param_1) = uVar4;
        param_1[2] = param_1[2] + 1;
        goto LAB_ram_480a9b18;
      }
      *(undefined1 *)(param_2 + 0x86a8) = uVar4;
      if (cVar16 != '\0') {
        uVar7 = param_1[1];
        goto LAB_ram_480ab23e;
      }
    }
    else {
      local_28 = *puVar14;
      param_1[2] = uVar7 + 4;
LAB_ram_480a9d98:
      *(uint *)(param_2 + 0x86a4) =
           (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
           local_28 & 0xff000000;
      if (cVar16 != '\0') {
        uVar13 = param_1[2];
        uVar7 = param_1[1];
        if (uVar13 < uVar7) {
          uVar5 = uVar13 + 1;
          uVar4 = *(undefined1 *)(uVar13 + *param_1);
          param_1[2] = uVar5;
          *(undefined1 *)(param_2 + 0x86a8) = uVar4;
LAB_ram_480ab23e:
          if (uVar5 < uVar7) {
            uVar4 = *(undefined1 *)(uVar5 + *param_1);
            param_1[2] = uVar5 + 1;
            goto LAB_ram_480a9b18;
          }
          goto LAB_ram_480a9dd2;
        }
      }
      *(undefined1 *)(param_2 + 0x86a8) = 0;
    }
LAB_ram_480a9dd2:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)(param_2 + 0x86a9) = 0;
    cVar16 = *(char *)((int)param_1 + 0xd);
    if ((char)param_1[3] != '\0') goto LAB_ram_480a9b2c;
LAB_ram_480a9dec:
    uVar4 = *(undefined1 *)(param_2 + 0x86aa);
    if (cVar16 == '\0') goto LAB_ram_480a9b3c;
    if ((uint)param_1[2] < (uint)param_1[1]) {
      *(undefined1 *)(param_1[2] + *param_1) = uVar4;
      param_1[2] = param_1[2] + 1;
      goto LAB_ram_480a9b3c;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)(param_2 + 0x86aa) = uVar4;
    cVar16 = *(char *)((int)param_1 + 0xd);
    cVar11 = cVar16;
    cVar12 = *(char *)(param_2 + 0x86ab);
    if ((char)param_1[3] != '\0') goto LAB_ram_480a9b54;
LAB_ram_480a9e18:
    cVar16 = cVar12;
    if (cVar11 != '\0') {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        *(char *)(param_1[2] + *param_1) = cVar16;
        param_1[2] = param_1[2] + 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
  }
  *(char *)(param_2 + 0x86ab) = cVar16;
  FUN_ram_480a82da(param_1,param_2 + 0x86ac);
  FUN_ram_480a7960(param_1,param_2 + 0x86c4);
  FUN_ram_480a7960(param_1,param_2 + 0x8705);
  FUN_ram_480a7960(param_1,param_2 + 0x8746);
  FUN_ram_480a7960(param_1,param_2 + 0x8787);
  cVar16 = (char)param_1[3];
  local_28 = 0;
  uStack_24 = 0;
  if (cVar16 == '\0') {
    uVar13 = *(uint *)(param_2 + 0x87cc);
    uVar5 = *(uint *)(param_2 + 0x87c8);
    uVar7 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar5 >> (uVar7 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar7 & 0x1f));
      if (-1 < (int)(uVar7 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar7 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar7 = uVar7 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar7 != 0x40);
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar7 = param_1[2];
      uVar5 = param_1[1];
      if (uVar7 <= uVar5) goto LAB_ram_480a9e90;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = '\0';
LAB_ram_480a9fde:
    uVar13 = *(uint *)(param_2 + 0x87d4);
    uVar7 = *(uint *)(param_2 + 0x87d0);
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    cVar16 = '\0';
    if (cVar11 != '\0') {
      uVar7 = param_1[2];
      uVar5 = param_1[1];
      cVar16 = '\0';
      if (uVar7 <= uVar5) goto LAB_ram_480aa02e;
    }
LAB_ram_480aa0ec:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = cVar16;
    cVar16 = '\0';
LAB_ram_480aa0f2:
    if (cVar11 != '\0') goto LAB_ram_480aa082;
    uVar13 = *(uint *)(param_2 + 0x87dc);
    uVar7 = *(uint *)(param_2 + 0x87d8);
    local_28 = 0;
    uStack_24 = 0;
    uVar5 = 0;
    pbVar9 = pbVar10;
    do {
      bVar6 = (byte)(uVar7 >> (uVar5 & 0x1f)) | (byte)((uVar13 << 1) << (0x1f - uVar5 & 0x1f));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar6 = (byte)(uVar13 >> (uVar5 - 0x20 & 0x1f));
      }
      *pbVar9 = bVar6;
      uVar5 = uVar5 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar5 != 0x40);
    bVar1 = cVar16 != '\0';
    cVar16 = '\0';
    if (bVar1) goto LAB_ram_480aa140;
    cVar11 = '\0';
LAB_ram_480aa296:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar7 = *(uint *)(param_2 + 0x87e0);
    cVar16 = '\0';
    cVar12 = cVar16;
    if (cVar11 != '\0') goto LAB_ram_480aa1a4;
LAB_ram_480aa2a8:
    cVar16 = '\0';
    local_28 = uVar7;
    if (cVar12 != '\0') goto LAB_ram_480aa2b0;
    uVar5 = *(uint *)(param_2 + 0x87e4);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = '\0';
LAB_ram_480aa30a:
    *(uint *)(param_2 + 0x87e0) = uVar7;
    cVar16 = '\0';
    cVar12 = '\0';
    local_28 = uVar5;
    if (cVar11 != '\0') goto LAB_ram_480aa23a;
LAB_ram_480aa334:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar12 != '\0') {
      cVar16 = '\0';
LAB_ram_480aa4d4:
      *(uint *)(param_2 + 0x87e4) =
           (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
           local_28 & 0xff000000;
      if (cVar16 != '\0') {
        uVar7 = param_1[2];
        goto LAB_ram_480aa4fc;
      }
      cVar16 = '\x01';
      goto LAB_ram_480aa582;
    }
    *(uint *)(param_2 + 0x87e4) = uVar5;
LAB_ram_480aa344:
    uVar5 = *(uint *)(param_2 + 0x87f8);
    cVar11 = '\0';
    local_28 = uVar5;
    goto LAB_ram_480aa350;
  }
  if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480ab44c:
    cVar16 = '\0';
  }
  else {
    uVar7 = param_1[2];
    uVar5 = param_1[1];
    if (uVar5 < uVar7) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto LAB_ram_480ab44c;
    }
LAB_ram_480a9e90:
    if (uVar5 - uVar7 < 8) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar11 = '\0';
LAB_ram_480aa90a:
      bVar1 = cVar16 == '\0';
      cVar16 = cVar11;
      if (bVar1) goto LAB_ram_480a9fde;
    }
    else {
      pbVar9 = (byte *)(*param_1 + uVar7);
      if (cVar16 == '\0') {
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[6] = uStack_24._2_1_;
        pbVar9[7] = uStack_24._3_1_;
        cVar16 = (char)param_1[3];
        cVar11 = *(char *)((int)param_1 + 0xd);
        param_1[2] = param_1[2] + 8;
        goto LAB_ram_480aa90a;
      }
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      param_1[2] = uVar7 + 8;
    }
  }
  uVar7 = 0;
  uVar13 = 0;
  uVar5 = 0;
  pbVar9 = pbVar10;
  do {
    while( true ) {
      uVar8 = uVar7 - 0x20;
      bVar6 = *pbVar9;
      uVar15 = 0x1f - uVar7;
      if (-1 < (int)uVar8) break;
      uVar8 = uVar7 & 0x1f;
      uVar7 = uVar7 + 8;
      uVar13 = uVar13 | (uint)bVar6 << uVar8;
      uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
      pbVar9 = pbVar9 + 1;
      if (uVar7 == 0x40) goto LAB_ram_480aa95c;
    }
    uVar7 = uVar7 + 8;
    uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
    pbVar9 = pbVar9 + 1;
  } while (uVar7 != 0x40);
LAB_ram_480aa95c:
  local_28 = 0;
  uStack_24 = 0;
  *(uint *)(param_2 + 0x87c8) = uVar13;
  *(uint *)(param_2 + 0x87cc) = uVar5;
  if (cVar16 != '\0') {
    uVar7 = param_1[2];
    uVar5 = param_1[1];
    if (uVar7 <= uVar5) {
LAB_ram_480aa02e:
      if (uVar5 - uVar7 < 8) goto LAB_ram_480aa0ec;
      pbVar9 = (byte *)(*param_1 + uVar7);
      if (cVar16 == '\0') {
        *pbVar9 = (byte)local_28;
        pbVar9[1] = local_28._1_1_;
        pbVar9[2] = local_28._2_1_;
        pbVar9[3] = local_28._3_1_;
        pbVar9[4] = (byte)uStack_24;
        pbVar9[5] = uStack_24._1_1_;
        pbVar9[6] = uStack_24._2_1_;
        pbVar9[7] = uStack_24._3_1_;
        param_1[2] = param_1[2] + 8;
        cVar11 = (char)param_1[3];
        cVar16 = *(char *)((int)param_1 + 0xd);
        goto LAB_ram_480aa0f2;
      }
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      param_1[2] = uVar7 + 8;
      goto LAB_ram_480aa082;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  cVar16 = '\0';
LAB_ram_480aa082:
  uVar7 = 0;
  uVar13 = 0;
  uVar5 = 0;
  pbVar9 = pbVar10;
  do {
    while( true ) {
      uVar8 = uVar7 - 0x20;
      bVar6 = *pbVar9;
      uVar15 = 0x1f - uVar7;
      if (-1 < (int)uVar8) break;
      uVar8 = uVar7 & 0x1f;
      uVar7 = uVar7 + 8;
      uVar13 = uVar13 | (uint)bVar6 << uVar8;
      uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar15 & 0x1f));
      pbVar9 = pbVar9 + 1;
      if (uVar7 == 0x40) goto LAB_ram_480aa0d0;
    }
    uVar7 = uVar7 + 8;
    uVar5 = uVar5 | (uint)bVar6 << (uVar8 & 0x1f);
    pbVar9 = pbVar9 + 1;
  } while (uVar7 != 0x40);
LAB_ram_480aa0d0:
  local_28 = 0;
  uStack_24 = 0;
  *(uint *)(param_2 + 0x87d0) = uVar13;
  *(uint *)(param_2 + 0x87d4) = uVar5;
  if (cVar16 == '\0') {
    uVar7 = *(uint *)(param_2 + 0x87e0);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
LAB_ram_480aa140:
    uVar5 = param_1[2];
    cVar11 = cVar16;
    if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 8)) goto LAB_ram_480aa296;
    pbVar9 = (byte *)(*param_1 + uVar5);
    if (cVar16 == '\0') {
      *pbVar9 = (byte)local_28;
      pbVar9[1] = local_28._1_1_;
      pbVar9[2] = local_28._2_1_;
      pbVar9[3] = local_28._3_1_;
      pbVar9[4] = (byte)uStack_24;
      pbVar9[5] = uStack_24._1_1_;
      pbVar9[6] = uStack_24._2_1_;
      pbVar9[7] = uStack_24._3_1_;
      cVar16 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 8;
      uVar7 = *(uint *)(param_2 + 0x87e0);
      cVar12 = cVar16;
      if ((char)param_1[3] == '\0') goto LAB_ram_480aa2a8;
    }
    else {
      local_28 = *(uint *)pbVar9;
      uStack_24 = *(undefined4 *)(pbVar9 + 4);
      uVar7 = *(uint *)(param_2 + 0x87e0);
      param_1[2] = uVar5 + 8;
    }
  }
LAB_ram_480aa1a4:
  uVar13 = 0;
  uVar8 = 0;
  uVar5 = 0;
  do {
    while( true ) {
      uVar15 = uVar13 - 0x20;
      bVar6 = *pbVar10;
      uVar17 = 0x1f - uVar13;
      if (-1 < (int)uVar15) break;
      uVar15 = uVar13 & 0x1f;
      uVar13 = uVar13 + 8;
      uVar8 = uVar8 | (uint)bVar6 << uVar15;
      uVar5 = uVar5 | (byte)((bVar6 >> 1) >> (uVar17 & 0x1f));
      pbVar10 = pbVar10 + 1;
      if (uVar13 == 0x40) goto LAB_ram_480aa1f2;
    }
    uVar13 = uVar13 + 8;
    uVar5 = uVar5 | (uint)bVar6 << (uVar15 & 0x1f);
    pbVar10 = pbVar10 + 1;
  } while (uVar13 != 0x40);
LAB_ram_480aa1f2:
  local_28 = 0;
  *(uint *)(param_2 + 0x87d8) = uVar8;
  *(uint *)(param_2 + 0x87dc) = uVar5;
  if (cVar16 == '\0') {
    uVar5 = *(uint *)(param_2 + 0x87e4);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar11 = '\0';
  }
  else {
LAB_ram_480aa2b0:
    uVar13 = param_1[2];
    if (((uint)param_1[1] < uVar13) || (param_1[1] - uVar13 < 4)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar11 = '\0';
    }
    else {
      puVar14 = (uint *)(*param_1 + uVar13);
      if (cVar16 != '\0') {
        local_28 = *puVar14;
        uVar5 = *(uint *)(param_2 + 0x87e4);
        param_1[2] = uVar13 + 4;
        cVar11 = cVar16;
        goto LAB_ram_480aa20e;
      }
      *(byte *)((int)puVar14 + 1) = local_28._1_1_;
      *(byte *)((int)puVar14 + 2) = local_28._2_1_;
      *(byte *)puVar14 = (byte)local_28;
      *(byte *)((int)puVar14 + 3) = local_28._3_1_;
      cVar16 = (char)param_1[3];
      cVar11 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 4;
    }
    uVar5 = *(uint *)(param_2 + 0x87e4);
    if (cVar16 == '\0') goto LAB_ram_480aa30a;
  }
LAB_ram_480aa20e:
  *(uint *)(param_2 + 0x87e0) =
       (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
       local_28 & 0xff000000;
  local_28 = 0;
  cVar16 = '\x01';
  cVar12 = cVar16;
  if (cVar11 == '\0') goto LAB_ram_480aa334;
LAB_ram_480aa23a:
  uVar7 = param_1[2];
  cVar12 = cVar16;
  if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 4)) goto LAB_ram_480aa334;
  puVar14 = (uint *)(*param_1 + uVar7);
  if (cVar16 != '\0') {
    local_28 = *puVar14;
    param_1[2] = uVar7 + 4;
    goto LAB_ram_480aa4d4;
  }
  *(byte *)((int)puVar14 + 1) = local_28._1_1_;
  *(byte *)((int)puVar14 + 2) = local_28._2_1_;
  *(byte *)puVar14 = (byte)local_28;
  *(byte *)((int)puVar14 + 3) = local_28._3_1_;
  cVar16 = *(char *)((int)param_1 + 0xd);
  uVar7 = param_1[2] + 4;
  param_1[2] = uVar7;
  if ((char)param_1[3] != '\0') goto LAB_ram_480aa4d4;
  *(uint *)(param_2 + 0x87e4) = uVar5;
  bVar1 = cVar16 == '\0';
  cVar16 = '\0';
  if (bVar1) goto LAB_ram_480aa344;
LAB_ram_480aa4fc:
  uStack_24 = 0;
  if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 0x10)) {
LAB_ram_480aa582:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar5 = *(uint *)(param_2 + 0x87f8);
    cVar11 = '\0';
    if (cVar16 != '\0') {
LAB_ram_480aa596:
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480aa59a:
      cVar11 = '\0';
      goto LAB_ram_480aa59c;
    }
LAB_ram_480aa71a:
    bVar1 = cVar11 != '\0';
    cVar11 = '\0';
    local_28 = uVar5;
    if (bVar1) {
      uVar7 = param_1[2];
      if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 4)) {
        cVar11 = '\0';
        goto LAB_ram_480aa350;
      }
      local_28._2_1_ = (byte)(uVar5 >> 0x10);
      local_28._0_1_ = (byte)uVar5;
      local_28._1_1_ = (byte)(uVar5 >> 8);
      pbVar10 = (byte *)(uVar7 + *param_1);
      *pbVar10 = (byte)local_28;
      pbVar10[1] = local_28._1_1_;
      pbVar10[2] = local_28._2_1_;
      pbVar10[3] = (byte)(uVar5 >> 0x18);
      cVar11 = *(char *)((int)param_1 + 0xd);
      uVar7 = param_1[2] + 4;
      param_1[2] = uVar7;
      if ((char)param_1[3] != '\0') goto LAB_ram_480aa59c;
      *(uint *)(param_2 + 0x87f8) = uVar5;
      if (cVar11 == '\0') goto LAB_ram_480aa360;
      uVar5 = param_1[1];
      cVar11 = '\0';
      if (uVar7 <= uVar5) goto LAB_ram_480aa5cc;
      goto LAB_ram_480aa792;
    }
LAB_ram_480aa350:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar11 != '\0') goto LAB_ram_480aa59a;
    *(uint *)(param_2 + 0x87f8) = uVar5;
LAB_ram_480aa360:
    uVar5 = *(uint *)(param_2 + 0x880c);
    cVar16 = '\0';
    local_28 = uVar5;
    goto LAB_ram_480aa36c;
  }
  if (cVar16 == '\0') {
    FUN_ram_4ff45158(*param_1 + uVar7,param_2 + 0x87e8,0x10);
  }
  else {
    FUN_ram_4ff45158(param_2 + 0x87e8,*param_1 + uVar7,0x10);
  }
  iVar2 = param_1[2];
  uVar7 = iVar2 + 0x10;
  local_28 = 0;
  param_1[2] = uVar7;
  uVar5 = *(uint *)(param_2 + 0x87f8);
  cVar11 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') goto LAB_ram_480aa71a;
  if ((cVar11 == '\0') || ((uint)param_1[1] < uVar7)) goto LAB_ram_480aa596;
  if (param_1[1] - uVar7 < 4) goto LAB_ram_480aa350;
  local_28 = *(uint *)(*param_1 + uVar7);
  param_1[2] = iVar2 + 0x14;
LAB_ram_480aa59c:
  *(uint *)(param_2 + 0x87f8) =
       (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
       local_28 & 0xff000000;
  if (cVar11 == '\0') {
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480aa7a6:
    local_28 = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480aa7aa:
    cVar16 = '\0';
LAB_ram_480aa64c:
    *(uint *)(param_2 + 0x880c) =
         (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
         local_28 & 0xff000000;
    if (cVar16 == '\0') {
      cVar16 = '\x01';
LAB_ram_480aaf68:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      uVar5 = *(uint *)(param_2 + 0x8820);
      cVar11 = '\0';
      if (cVar16 == '\0') {
LAB_ram_480aaf82:
        local_28 = uVar5;
        if (cVar11 != '\0') {
          uVar7 = param_1[2];
          if ((uVar7 <= (uint)param_1[1]) && (3 < param_1[1] - uVar7)) {
            local_28._0_1_ = (byte)uVar5;
            local_28._1_1_ = (byte)(uVar5 >> 8);
            local_28._2_1_ = (byte)(uVar5 >> 0x10);
            pbVar10 = (byte *)(*param_1 + uVar7);
            *pbVar10 = (byte)local_28;
            pbVar10[1] = local_28._1_1_;
            pbVar10[2] = local_28._2_1_;
            pbVar10[3] = (byte)(uVar5 >> 0x18);
            param_1[2] = param_1[2] + 4;
            if ((char)param_1[3] == '\0') goto LAB_ram_480aa388;
            goto LAB_ram_480aa6fc;
          }
        }
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        goto LAB_ram_480aa388;
      }
LAB_ram_480aaf7a:
      local_28 = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
    }
    else {
      uVar7 = param_1[2];
LAB_ram_480aa676:
      uStack_24 = 0;
      if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 0x10)) goto LAB_ram_480aaf68;
      if (cVar16 == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar7,param_2 + 0x8810,0x10);
      }
      else {
        FUN_ram_4ff45158(param_2 + 0x8810,*param_1 + uVar7,0x10);
      }
      iVar2 = param_1[2];
      uVar7 = iVar2 + 0x10;
      param_1[2] = uVar7;
      uVar5 = *(uint *)(param_2 + 0x8820);
      cVar11 = *(char *)((int)param_1 + 0xd);
      if ((char)param_1[3] == '\0') goto LAB_ram_480aaf82;
      if (((cVar11 == '\0') || ((uint)param_1[1] < uVar7)) || (param_1[1] - uVar7 < 4))
      goto LAB_ram_480aaf7a;
      local_28 = *(uint *)(*param_1 + uVar7);
      param_1[2] = iVar2 + 0x14;
    }
LAB_ram_480aa6fc:
    uVar5 = (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
            local_28 & 0xff000000;
  }
  else {
    uVar7 = param_1[2];
    uVar5 = param_1[1];
    if (uVar7 <= uVar5) {
LAB_ram_480aa5cc:
      uStack_24 = 0;
      if (uVar5 - uVar7 < 0x10) goto LAB_ram_480aa792;
      if (cVar11 == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar7,param_2 + 0x87fc,0x10);
      }
      else {
        FUN_ram_4ff45158(param_2 + 0x87fc,*param_1 + uVar7,0x10);
      }
      iVar2 = param_1[2];
      uVar7 = iVar2 + 0x10;
      local_28 = 0;
      param_1[2] = uVar7;
      uVar5 = *(uint *)(param_2 + 0x880c);
      cVar16 = *(char *)((int)param_1 + 0xd);
      if ((char)param_1[3] == '\0') goto LAB_ram_480aafe8;
      if ((cVar16 == '\0') || ((uint)param_1[1] < uVar7)) goto LAB_ram_480aa7a6;
      if (param_1[1] - uVar7 < 4) goto LAB_ram_480aa36c;
      local_28 = *(uint *)(*param_1 + uVar7);
      param_1[2] = iVar2 + 0x14;
      goto LAB_ram_480aa64c;
    }
LAB_ram_480aa792:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar5 = *(uint *)(param_2 + 0x880c);
    cVar16 = '\0';
    if (cVar11 != '\0') goto LAB_ram_480aa7a6;
LAB_ram_480aafe8:
    bVar1 = cVar16 != '\0';
    cVar16 = '\0';
    local_28 = uVar5;
    if (bVar1) {
      uVar7 = param_1[2];
      if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 4)) {
        cVar16 = '\0';
        goto LAB_ram_480aa36c;
      }
      local_28._2_1_ = (byte)(uVar5 >> 0x10);
      local_28._0_1_ = (byte)uVar5;
      local_28._1_1_ = (byte)(uVar5 >> 8);
      pbVar10 = (byte *)(uVar7 + *param_1);
      *pbVar10 = (byte)local_28;
      pbVar10[1] = local_28._1_1_;
      pbVar10[2] = local_28._2_1_;
      pbVar10[3] = (byte)(uVar5 >> 0x18);
      cVar16 = *(char *)((int)param_1 + 0xd);
      uVar7 = param_1[2] + 4;
      param_1[2] = uVar7;
      if ((char)param_1[3] != '\0') goto LAB_ram_480aa64c;
      *(uint *)(param_2 + 0x880c) = uVar5;
      bVar1 = cVar16 == '\0';
      cVar16 = '\0';
      if (bVar1) goto LAB_ram_480aa37c;
      goto LAB_ram_480aa676;
    }
LAB_ram_480aa36c:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (cVar16 != '\0') goto LAB_ram_480aa7aa;
    *(uint *)(param_2 + 0x880c) = uVar5;
LAB_ram_480aa37c:
    uVar5 = *(uint *)(param_2 + 0x8820);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
LAB_ram_480aa388:
  uStack_24 = 0;
  *(uint *)(param_2 + 0x8820) = uVar5;
  FUN_ram_480a7ad2(param_1,param_2 + 0x8828);
  FUN_ram_4807a120(param_1,param_2 + 0x88a0);
  FUN_ram_4807a120(param_1,param_2 + 0x8dc8);
  pvVar18 = (void *)(param_2 + 0x92f0);
  if ((char)param_1[3] == '\0') {
    pvVar3 = memchr(pvVar18,0,0xc);
    if (pvVar3 != (void *)0x0) {
      uVar5 = (int)pvVar3 - (int)pvVar18;
      local_28 = uVar5;
      if (*(char *)((int)param_1 + 0xd) != '\0') {
        uVar7 = param_1[2];
        if ((uVar7 <= (uint)param_1[1]) && (3 < param_1[1] - uVar7)) {
          local_28._0_1_ = (byte)uVar5;
          local_28._1_1_ = (byte)(uVar5 >> 8);
          local_28._2_1_ = (byte)(uVar5 >> 0x10);
          local_28._3_1_ = (byte)(uVar5 >> 0x18);
          pbVar10 = (byte *)(*param_1 + uVar7);
          *pbVar10 = (byte)local_28;
          pbVar10[1] = local_28._1_1_;
          pbVar10[2] = local_28._2_1_;
          pbVar10[3] = local_28._3_1_;
          param_1[2] = param_1[2] + 4;
          if ((char)param_1[3] != '\0') goto LAB_ram_480aa424;
          goto LAB_ram_480aa440;
        }
      }
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto LAB_ram_480aa440;
    }
  }
  else {
    local_28 = 0;
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar5 = param_1[2];
      if (((uint)param_1[1] < uVar5) || (param_1[1] - uVar5 < 4)) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
      else {
        local_28 = *(uint *)(*param_1 + uVar5);
        param_1[2] = uVar5 + 4;
      }
    }
LAB_ram_480aa424:
    uVar5 = (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
            local_28 & 0xff000000;
LAB_ram_480aa440:
    uStack_24 = 0;
    if (uVar5 < 0xc) {
      FUN_ram_4807a0c0(param_1,pvVar18,uVar5);
      if ((char)param_1[3] != '\0') {
        *(undefined1 *)(param_2 + uVar5 + 0x92f0) = 0;
      }
      goto LAB_ram_480aa44a;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480aa44a:
  FUN_ram_480a7960(param_1,param_2 + 0x92fc);
  return;
}


