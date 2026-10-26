/* Firmware entry: 0x480eab84 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_stop_480eab84(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_34;
  char *pcStack_30;
  int aiStack_2c [6];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_480eaa3a(&DAT_ram_4ff48d94,1,&DAT_ram_4ff60e20);
  iVar3 = DAT_ram_4ff6ded8;
  iVar4 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
  iVar7 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
  uStack_34 = 200;
  pcStack_30 = "{\"ok\":true}";
  aiStack_2c[0] = 0xb;
  cVar1 = *(char *)(iVar4 * 0x1d40 + iVar7 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    puVar2 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
    iVar5 = 0xb;
    if (((code *)*puVar2 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
      *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
      (*(code *)*puVar2)(&uStack_34,&pcStack_30,aiStack_2c);
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      iVar5 = aiStack_2c[0];
      if (aiStack_2c[0] == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar6 = iVar7 + iVar4;
    *(int *)(iVar6 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar6 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar7 + iVar4 + 0x1c,7);
    }
    else {
      if (aiStack_2c[0] != 0) {
        FUN_ram_4ff45158(iVar5,pcStack_30,aiStack_2c[0]);
        iVar5 = *(int *)(iVar6 + 0x1cdc);
      }
      iVar4 = *(int *)(iVar3 + 0x4c) + *(int *)(iVar3 + 0x40) * 0x1d40;
      if ((*(char *)(iVar4 + 0x44c) == '\0') || (*(char *)(iVar4 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iVar4 + 0x1ce0) = iVar5;
      *(int *)(iVar4 + 0x1ce4) = aiStack_2c[0];
      *(undefined4 *)(iVar4 + 0x1ce8) = 0;
      FUN_ram_48066484(iVar3,uStack_34,"application/json",iVar4,&LAB_ram_4802d3f2);
    }
  }
  return;
}


