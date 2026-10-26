/* Firmware entry: 0x480ed598 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_listen_480ed598(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 uStack_175;
  undefined4 uStack_174;
  char *apcStack_170 [3];
  int iStack_164;
  undefined1 uStack_160;
  undefined2 uStack_134;
  undefined1 uStack_12b;
  undefined1 uStack_128;
  undefined2 uStack_122;
  undefined1 uStack_114;
  int aiStack_74 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6ded0 != (code *)0x0) &&
     (iVar3 = (*DAT_ram_4ff6ded0)(), iVar4 = DAT_ram_4ff6ded8, iVar3 == 0)) {
    uStack_174 = 0x199;
    iStack_164 = 0x2e;
    iVar3 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
    iVar9 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
    apcStack_170[0] = "{\"ok\":false,\"error\":\"can_experiment_quiesced\"}";
    cVar1 = *(char *)(iVar3 * 0x1d40 + iVar9 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      puVar2 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
      iVar6 = 0x2e;
      if (((code *)*puVar2 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
        *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
        (*(code *)*puVar2)(&uStack_174,apcStack_170,&iStack_164);
        *(undefined1 *)(iVar4 + 0x2c) = 0;
        iVar6 = iStack_164;
        if (iStack_164 == 0) {
          iVar6 = 1;
        }
      }
      iVar6 = FUN_ram_4ff206d8(iVar6,0x404);
      iVar3 = iVar3 * 0x1d40;
      iVar8 = iVar9 + iVar3;
      *(int *)(iVar8 + 0x1cdc) = iVar6;
      if (iVar6 == 0) {
        if (*(char *)(iVar8 + 0x44c) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        FUN_ram_48065e9c(iVar9 + iVar3 + 0x1c,7);
      }
      else {
        if (iStack_164 != 0) {
          FUN_ram_4ff45158(iVar6,apcStack_170[0],iStack_164);
          iVar6 = *(int *)(iVar8 + 0x1cdc);
        }
        iVar3 = *(int *)(iVar4 + 0x4c) + *(int *)(iVar4 + 0x40) * 0x1d40;
        if ((*(char *)(iVar3 + 0x44c) == '\0') || (*(char *)(iVar3 + 0x44c) == '\x06')) {
          return;
        }
        *(int *)(iVar3 + 0x1ce0) = iVar6;
        *(int *)(iVar3 + 0x1ce4) = iStack_164;
        *(undefined4 *)(iVar3 + 0x1ce8) = 0;
        FUN_ram_48066484(iVar4,uStack_174,"application/json",iVar3,&LAB_ram_4802d3f2);
      }
    }
    return;
  }
  memset(&iStack_164,0,0x144);
  uStack_160 = 1;
  uStack_12b = 1;
  uStack_134 = 100;
  uStack_128 = 0xff;
  uStack_114 = 0xff;
  uStack_122 = 0xff1d;
  piVar7 = &iStack_164;
  do {
    *(undefined1 *)(piVar7 + 0x15) = 1;
    *(undefined2 *)(piVar7 + 0x20) = 100;
    *(undefined1 *)((int)piVar7 + 0x89) = 1;
    *(undefined1 *)(piVar7 + 0x23) = 0xff;
    *(undefined2 *)((int)piVar7 + 0x92) = 0xff1d;
    *(undefined1 *)(piVar7 + 0x28) = 0xff;
    piVar7 = piVar7 + 0x14;
  } while (piVar7 != aiStack_74);
  uStack_175 = 0;
  iVar4 = FUN_ram_48088676(&iStack_164,&uStack_175);
  if (iVar4 == 0) {
    FUN_ram_4808999a(400,uStack_175,0);
    return;
  }
  uVar5 = FUN_ram_480ed24a(&DAT_ram_4ff48d94,&iStack_164,&DAT_ram_4ff60e20);
  apcStack_170[0]._0_3_ = (undefined3)uVar5;
  uStack_174 = CONCAT13(uStack_174._3_1_,apcStack_170[0]._0_3_);
  if ((uVar5 & 0xff) == 0) {
    FUN_ram_4808999a(0x199,(char)(uVar5 >> 8),uVar5 >> 0x10 & 0xff);
    return;
  }
  FUN_ram_48066698(DAT_ram_4ff6ded8,200,"application/json","{\"ok\":true}",0xb);
  return;
}


