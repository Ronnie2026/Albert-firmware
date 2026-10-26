/* Firmware entry: 0x480a82da */

void FUN_ram_480a82da(int *param_1,void *param_2)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined4 uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar6 = (char)param_1[3];
  if (cVar6 == '\0') {
    pvVar3 = memchr(param_2,0,0x18);
    if (pvVar3 == (void *)0x0) goto LAB_ram_480a837a;
    uVar2 = (int)pvVar3 - (int)param_2;
    if (*(char *)((int)param_1 + 0xd) == '\0') {
LAB_ram_480a838e:
      *(undefined1 *)((int)param_1 + 0xd) = 0;
    }
    else {
      uVar4 = param_1[2];
      if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 4)) goto LAB_ram_480a838e;
      uStack_28._0_1_ = (undefined1)uVar2;
      uStack_28._1_1_ = (undefined1)(uVar2 >> 8);
      uStack_28._2_1_ = (undefined1)(uVar2 >> 0x10);
      uStack_28._3_1_ = (undefined1)(uVar2 >> 0x18);
      puVar5 = (undefined1 *)(*param_1 + uVar4);
      *puVar5 = (undefined1)uStack_28;
      puVar5[1] = uStack_28._1_1_;
      puVar5[2] = uStack_28._2_1_;
      puVar5[3] = uStack_28._3_1_;
      cVar6 = (char)param_1[3];
      param_1[2] = param_1[2] + 4;
      uStack_28 = uVar2;
      if (cVar6 != '\0') goto LAB_ram_480a8356;
    }
    bVar1 = false;
  }
  else {
    uStack_28 = 0;
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      uVar2 = param_1[2];
      if (((uint)param_1[1] < uVar2) || (param_1[1] - uVar2 < 4)) {
        *(undefined1 *)((int)param_1 + 0xd) = 0;
      }
      else {
        uStack_28 = *(uint *)(*param_1 + uVar2);
        param_1[2] = uVar2 + 4;
      }
    }
LAB_ram_480a8356:
    uVar2 = (uStack_28 >> 8 & 0xff) << 8 | (uStack_28 >> 0x10 & 0xff) << 0x10 | uStack_28 & 0xff |
            uStack_28 & 0xff000000;
    bVar1 = true;
  }
  if (0x17 < uVar2) {
LAB_ram_480a837a:
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    return;
  }
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    uVar4 = param_1[2];
    if ((uVar4 <= (uint)param_1[1]) && (uVar2 <= param_1[1] - uVar4)) {
      if (bVar1) {
        FUN_ram_4ff45158(param_2,*param_1 + uVar4,uVar2);
      }
      else {
        FUN_ram_4ff45158(*param_1 + uVar4,param_2,uVar2);
      }
      cVar6 = (char)param_1[3];
      param_1[2] = param_1[2] + uVar2;
      goto LAB_ram_480a83ca;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 0;
LAB_ram_480a83ca:
  if (cVar6 == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  *(undefined1 *)(uVar2 + (int)param_2) = 0;
  return;
}


