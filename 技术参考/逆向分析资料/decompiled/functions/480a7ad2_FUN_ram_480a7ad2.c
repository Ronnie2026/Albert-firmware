/* Firmware entry: 0x480a7ad2 */

void FUN_ram_480a7ad2(int *param_1,char *param_2)

{
  void *pvVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  undefined4 local_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar2 = *param_2;
  cVar13 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') {
    if (cVar13 != '\0') {
      if ((uint)param_1[2] < (uint)param_1[1]) {
        *(char *)(param_1[2] + *param_1) = cVar2;
        param_1[2] = param_1[2] + 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
    }
LAB_ram_480a7b72:
    *param_2 = cVar2;
    cVar2 = (char)param_1[3];
    if (cVar2 != '\0') goto LAB_ram_480a7b18;
LAB_ram_480a7b84:
    pvVar1 = memchr(param_2 + 1,0,0x19);
    if (pvVar1 != (void *)0x0) {
      uVar4 = (int)pvVar1 - (int)(param_2 + 1);
      local_28 = uVar4;
      if (*(char *)((int)param_1 + 0xd) != '\0') {
        uVar6 = param_1[2];
        if (((uint)param_1[1] < uVar6) || (param_1[1] - uVar6 < 4)) goto LAB_ram_480a7cfa;
        local_28._0_1_ = (byte)uVar4;
        local_28._1_1_ = (byte)(uVar4 >> 8);
        local_28._2_1_ = (byte)(uVar4 >> 0x10);
        local_28._3_1_ = (byte)(uVar4 >> 0x18);
        pbVar7 = (byte *)(*param_1 + uVar6);
        *pbVar7 = (byte)local_28;
        pbVar7[1] = local_28._1_1_;
        pbVar7[2] = local_28._2_1_;
        pbVar7[3] = local_28._3_1_;
        cVar13 = (char)param_1[3];
        param_1[2] = param_1[2] + 4;
        if (cVar13 == '\0') goto joined_r0x480a7d04;
        goto LAB_ram_480a7bec;
      }
LAB_ram_480a7cfa:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar13 = cVar2;
      goto joined_r0x480a7d04;
    }
LAB_ram_480a7c16:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a7c1a:
    FUN_ram_480a7960(param_1,param_2 + 0x1a);
    cVar2 = (char)param_1[3];
    local_28 = 0;
    uStack_24 = 0;
    if (cVar2 != '\0') goto LAB_ram_480a7c30;
LAB_ram_480a7d5e:
    uStack_24 = 0;
    local_28 = 0;
    pbVar7 = (byte *)&local_28;
    uVar8 = *(uint *)(param_2 + 100);
    uVar4 = *(uint *)(param_2 + 0x60);
    uVar6 = 0;
    do {
      bVar3 = (byte)(uVar4 >> (uVar6 & 0x1f)) | (byte)((uVar8 << 1) << (0x1f - uVar6 & 0x1f));
      if (-1 < (int)(uVar6 - 0x20)) {
        bVar3 = (byte)(uVar8 >> (uVar6 - 0x20 & 0x1f));
      }
      *pbVar7 = bVar3;
      uVar6 = uVar6 + 8;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0x40);
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar4 = param_1[2];
      uVar6 = param_1[1];
      if (uVar6 < uVar4) goto LAB_ram_480a7da8;
      goto LAB_ram_480a7c40;
    }
LAB_ram_480a7da8:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar13 = '\0';
    goto LAB_ram_480a7dae;
  }
  if (cVar13 != '\0') {
    uVar4 = param_1[2];
    if (uVar4 < (uint)param_1[1]) {
      bVar3 = *(byte *)(*param_1 + uVar4);
      param_1[2] = uVar4 + 1;
      if (bVar3 < 2) {
        cVar2 = bVar3 != 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
        cVar2 = cVar13;
      }
      goto LAB_ram_480a7b72;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  *param_2 = '\0';
  cVar2 = (char)param_1[3];
  if (cVar2 == '\0') goto LAB_ram_480a7b84;
LAB_ram_480a7b18:
  local_28 = 0;
  cVar13 = cVar2;
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 4)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
    }
    else {
      local_28 = *(uint *)(*param_1 + uVar4);
      param_1[2] = uVar4 + 4;
    }
  }
LAB_ram_480a7bec:
  uVar4 = (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
          local_28 & 0xff000000;
  cVar2 = '\x01';
joined_r0x480a7d04:
  uStack_24 = 0;
  if (0x18 < uVar4) goto LAB_ram_480a7c16;
  uStack_24 = 0;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480a7f34:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
    uVar6 = param_1[2];
    if (((uint)param_1[1] < uVar6) || (param_1[1] - uVar6 < uVar4)) goto LAB_ram_480a7f34;
    if (cVar2 == '\0') {
      FUN_ram_4ff45158(*param_1 + uVar6,param_2 + 1,uVar4);
    }
    else {
      FUN_ram_4ff45158(param_2 + 1,*param_1 + uVar6,uVar4);
    }
    cVar13 = (char)param_1[3];
    param_1[2] = param_1[2] + uVar4;
  }
  if (cVar13 == '\0') goto LAB_ram_480a7c1a;
  param_2[uVar4 + 1] = '\0';
  FUN_ram_480a7960(param_1,param_2 + 0x1a);
  cVar2 = (char)param_1[3];
  local_28 = 0;
  uStack_24 = 0;
  if (cVar2 == '\0') goto LAB_ram_480a7d5e;
LAB_ram_480a7c30:
  uStack_24 = 0;
  local_28 = 0;
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    uVar4 = param_1[2];
    uVar6 = param_1[1];
    if (uVar6 < uVar4) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      goto LAB_ram_480a815c;
    }
LAB_ram_480a7c40:
    if (7 < uVar6 - uVar4) {
      pbVar7 = (byte *)(*param_1 + uVar4);
      if (cVar2 == '\0') {
        *pbVar7 = (byte)local_28;
        pbVar7[1] = local_28._1_1_;
        pbVar7[2] = local_28._2_1_;
        pbVar7[3] = local_28._3_1_;
        pbVar7[4] = (byte)uStack_24;
        pbVar7[5] = uStack_24._1_1_;
        pbVar7[6] = uStack_24._2_1_;
        pbVar7[7] = uStack_24._3_1_;
        cVar10 = *(char *)((int)param_1 + 0xd);
        param_1[2] = param_1[2] + 8;
        cVar13 = cVar10;
        if ((char)param_1[3] == '\0') goto LAB_ram_480a7dae;
      }
      else {
        local_28 = *(uint *)pbVar7;
        uStack_24 = *(undefined4 *)(pbVar7 + 4);
        param_1[2] = uVar4 + 8;
        cVar10 = cVar2;
      }
      goto LAB_ram_480a7c96;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar13 = '\0';
    cVar10 = '\0';
    if (cVar2 != '\0') goto LAB_ram_480a7c96;
LAB_ram_480a7dae:
    uVar8 = *(uint *)(param_2 + 0x6c);
    uVar4 = *(uint *)(param_2 + 0x68);
    pbVar7 = (byte *)&local_28;
    local_28 = 0;
    uStack_24 = 0;
    uVar6 = 0;
    do {
      bVar3 = (byte)(uVar4 >> (uVar6 & 0x1f)) | (byte)((uVar8 << 1) << (0x1f - uVar6 & 0x1f));
      if (-1 < (int)(uVar6 - 0x20)) {
        bVar3 = (byte)(uVar8 >> (uVar6 - 0x20 & 0x1f));
      }
      *pbVar7 = bVar3;
      uVar6 = uVar6 + 8;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0x40);
    cVar2 = '\0';
    if (cVar13 != '\0') {
      cVar10 = '\0';
      goto LAB_ram_480a7df4;
    }
LAB_ram_480a7f3a:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uVar6 = *(uint *)(param_2 + 0x70);
    cVar10 = '\0';
    cVar13 = cVar10;
    if (cVar2 != '\0') goto LAB_ram_480a7e54;
LAB_ram_480a7f48:
    cVar10 = '\0';
    local_28 = uVar6;
    if (cVar13 != '\0') goto LAB_ram_480a7f50;
    uVar4 = *(uint *)(param_2 + 0x74);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar2 = '\0';
LAB_ram_480a7fa0:
    *(uint *)(param_2 + 0x70) = uVar6;
    if (cVar2 != '\0') {
      uVar6 = param_1[2];
      uVar8 = param_1[1];
      cVar2 = '\0';
      local_28 = uVar4;
      if (uVar6 <= uVar8) goto LAB_ram_480a7fce;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    goto LAB_ram_480a7f04;
  }
LAB_ram_480a815c:
  cVar10 = '\0';
LAB_ram_480a7c96:
  pbVar7 = (byte *)&local_28;
  uVar8 = 0;
  uVar4 = 0;
  uVar6 = 0;
  do {
    while( true ) {
      uVar5 = uVar8 - 0x20;
      bVar3 = *pbVar7;
      uVar11 = 0x1f - uVar8;
      if (-1 < (int)uVar5) break;
      uVar5 = uVar8 & 0x1f;
      uVar8 = uVar8 + 8;
      uVar4 = uVar4 | (uint)bVar3 << uVar5;
      uVar6 = uVar6 | (byte)((bVar3 >> 1) >> (uVar11 & 0x1f));
      pbVar7 = pbVar7 + 1;
      if (uVar8 == 0x40) goto LAB_ram_480a7ce4;
    }
    uVar8 = uVar8 + 8;
    uVar6 = uVar6 | (uint)bVar3 << (uVar5 & 0x1f);
    pbVar7 = pbVar7 + 1;
  } while (uVar8 != 0x40);
LAB_ram_480a7ce4:
  *(uint *)(param_2 + 0x60) = uVar4;
  *(uint *)(param_2 + 100) = uVar6;
  local_28 = 0;
  uStack_24 = 0;
  if (cVar10 == '\0') {
    uVar6 = *(uint *)(param_2 + 0x70);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
LAB_ram_480a7df4:
    uVar4 = param_1[2];
    cVar2 = cVar10;
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 8)) goto LAB_ram_480a7f3a;
    pbVar7 = (byte *)(*param_1 + uVar4);
    if (cVar10 == '\0') {
      *pbVar7 = (byte)local_28;
      pbVar7[1] = local_28._1_1_;
      pbVar7[2] = local_28._2_1_;
      pbVar7[3] = local_28._3_1_;
      pbVar7[4] = (byte)uStack_24;
      pbVar7[5] = uStack_24._1_1_;
      pbVar7[6] = uStack_24._2_1_;
      pbVar7[7] = uStack_24._3_1_;
      cVar10 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 8;
      uVar6 = *(uint *)(param_2 + 0x70);
      cVar13 = cVar10;
      if ((char)param_1[3] == '\0') goto LAB_ram_480a7f48;
    }
    else {
      local_28 = *(uint *)pbVar7;
      uStack_24 = *(undefined4 *)(pbVar7 + 4);
      uVar6 = *(uint *)(param_2 + 0x70);
      param_1[2] = uVar4 + 8;
    }
  }
LAB_ram_480a7e54:
  pbVar7 = (byte *)&local_28;
  uVar5 = 0;
  uVar4 = 0;
  uVar8 = 0;
  do {
    while( true ) {
      uVar11 = uVar5 - 0x20;
      bVar3 = *pbVar7;
      uVar12 = 0x1f - uVar5;
      if (-1 < (int)uVar11) break;
      uVar11 = uVar5 & 0x1f;
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 | (uint)bVar3 << uVar11;
      uVar8 = uVar8 | (byte)((bVar3 >> 1) >> (uVar12 & 0x1f));
      pbVar7 = pbVar7 + 1;
      if (uVar5 == 0x40) goto LAB_ram_480a7ea2;
    }
    uVar5 = uVar5 + 8;
    uVar8 = uVar8 | (uint)bVar3 << (uVar11 & 0x1f);
    pbVar7 = pbVar7 + 1;
  } while (uVar5 != 0x40);
LAB_ram_480a7ea2:
  *(uint *)(param_2 + 0x68) = uVar4;
  *(uint *)(param_2 + 0x6c) = uVar8;
  local_28 = 0;
  if (cVar10 == '\0') {
    uVar4 = *(uint *)(param_2 + 0x74);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    cVar2 = '\0';
  }
  else {
LAB_ram_480a7f50:
    uVar8 = param_1[2];
    if (((uint)param_1[1] < uVar8) || (param_1[1] - uVar8 < 4)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      cVar2 = '\0';
    }
    else {
      puVar9 = (uint *)(*param_1 + uVar8);
      if (cVar10 != '\0') {
        local_28 = *puVar9;
        uVar4 = *(uint *)(param_2 + 0x74);
        param_1[2] = uVar8 + 4;
        cVar2 = cVar10;
        goto LAB_ram_480a7eb6;
      }
      *(byte *)puVar9 = (byte)local_28;
      *(byte *)((int)puVar9 + 1) = local_28._1_1_;
      *(byte *)((int)puVar9 + 2) = local_28._2_1_;
      *(byte *)((int)puVar9 + 3) = local_28._3_1_;
      cVar10 = (char)param_1[3];
      cVar2 = *(char *)((int)param_1 + 0xd);
      param_1[2] = param_1[2] + 4;
    }
    uVar4 = *(uint *)(param_2 + 0x74);
    if (cVar10 == '\0') goto LAB_ram_480a7fa0;
  }
LAB_ram_480a7eb6:
  *(uint *)(param_2 + 0x70) =
       (local_28 >> 8 & 0xff) << 8 | (local_28 >> 0x10 & 0xff) << 0x10 | local_28 & 0xff |
       local_28 & 0xff000000;
  local_28 = 0;
  if (cVar2 == '\0') {
LAB_ram_480a7ee2:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
    uVar6 = param_1[2];
    uVar8 = param_1[1];
    if (uVar8 < uVar6) goto LAB_ram_480a7ee2;
LAB_ram_480a7fce:
    if (uVar8 - uVar6 < 4) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
joined_r0x480a8140:
      if (cVar2 == '\0') goto LAB_ram_480a7f04;
    }
    else {
      puVar9 = (uint *)(*param_1 + uVar6);
      if (cVar2 == '\0') {
        *(byte *)puVar9 = (byte)local_28;
        *(byte *)((int)puVar9 + 1) = local_28._1_1_;
        *(byte *)((int)puVar9 + 2) = local_28._2_1_;
        *(byte *)((int)puVar9 + 3) = local_28._3_1_;
        cVar2 = (char)param_1[3];
        param_1[2] = param_1[2] + 4;
        goto joined_r0x480a8140;
      }
      local_28 = *puVar9;
      param_1[2] = uVar6 + 4;
    }
  }
  uVar4 = (local_28 >> 0x10 & 0xff) << 0x10 | (local_28 >> 8 & 0xff) << 8 | local_28 & 0xff |
          local_28 & 0xff000000;
LAB_ram_480a7f04:
  *(uint *)(param_2 + 0x74) = uVar4;
  return;
}


