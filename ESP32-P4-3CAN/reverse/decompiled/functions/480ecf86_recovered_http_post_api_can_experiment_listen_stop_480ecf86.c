/* Firmware entry: 0x480ecf86 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_listen_stop_480ecf86(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uStack_44;
  char *pcStack_40;
  int aiStack_3c [6];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff48d94,0xffffffff);
  if ((byte)(DAT_ram_4ff4a020 - 3U) < 2) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
  }
  else {
    DAT_ram_4ff4a020 = '\0';
    DAT_ram_4ff48ee4 = 0;
    DAT_ram_4ff48ee8 = 0;
    puVar8 = &DAT_ram_4ff48ef6;
    do {
      puVar8[-10] = 1;
      *(undefined4 *)(puVar8 + -6) = 0;
      *(undefined2 *)(puVar8 + -2) = 0;
      pvVar6 = memset(puVar8,0,0x20);
      *(undefined1 *)((int)pvVar6 + 0x20) = 0;
      *(undefined4 *)((int)pvVar6 + 0x22) = 100;
      *(undefined1 *)((int)pvVar6 + 0x26) = 0;
      *(undefined1 *)((int)pvVar6 + 0x3a) = 0;
      *(undefined4 *)((int)pvVar6 + 0x3e) = 0;
      *(undefined1 *)((int)pvVar6 + 0x42) = 0xff;
      *(undefined1 *)((int)pvVar6 + 0x27) = 0;
      *(undefined1 *)((int)pvVar6 + 0x28) = 0;
      *(undefined1 *)((int)pvVar6 + 0x29) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2a) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
      *(undefined1 *)((int)pvVar6 + 0x2c) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2d) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2e) = 0xff;
      *(undefined1 *)((int)pvVar6 + 0x2f) = 0;
      *(undefined1 *)((int)pvVar6 + 0x30) = 0;
      *(undefined1 *)((int)pvVar6 + 0x31) = 0;
      *(undefined1 *)((int)pvVar6 + 0x32) = 0;
      *(undefined1 *)((int)pvVar6 + 0x33) = 0;
      *(undefined2 *)((int)pvVar6 + 0x34) = 0xff1d;
      *(undefined1 *)((int)pvVar6 + 0x36) = 0;
      *(undefined1 *)((int)pvVar6 + 0x37) = 0;
      *(undefined1 *)((int)pvVar6 + 0x38) = 0;
      *(undefined1 *)((int)pvVar6 + 0x39) = 0;
      puVar8 = (undefined *)((int)pvVar6 + 0x50);
    } while (puVar8 != (undefined *)0x4ff49036);
    DAT_ram_4ff48da0 = 0;
    puVar8 = &DAT_ram_4ff48dae;
    do {
      puVar8[-10] = 1;
      *(undefined4 *)(puVar8 + -6) = 0;
      *(undefined2 *)(puVar8 + -2) = 0;
      pvVar6 = memset(puVar8,0,0x20);
      *(undefined1 *)((int)pvVar6 + 0x20) = 0;
      *(undefined4 *)((int)pvVar6 + 0x22) = 100;
      *(undefined1 *)((int)pvVar6 + 0x26) = 0;
      *(undefined1 *)((int)pvVar6 + 0x3a) = 0;
      *(undefined4 *)((int)pvVar6 + 0x3e) = 0;
      *(undefined1 *)((int)pvVar6 + 0x42) = 0xff;
      *(undefined1 *)((int)pvVar6 + 0x27) = 0;
      *(undefined1 *)((int)pvVar6 + 0x28) = 0;
      *(undefined1 *)((int)pvVar6 + 0x29) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2a) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
      *(undefined1 *)((int)pvVar6 + 0x2c) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2d) = 0;
      *(undefined1 *)((int)pvVar6 + 0x2e) = 0xff;
      *(undefined1 *)((int)pvVar6 + 0x2f) = 0;
      *(undefined1 *)((int)pvVar6 + 0x30) = 0;
      *(undefined1 *)((int)pvVar6 + 0x31) = 0;
      *(undefined1 *)((int)pvVar6 + 0x32) = 0;
      *(undefined1 *)((int)pvVar6 + 0x33) = 0;
      *(undefined2 *)((int)pvVar6 + 0x34) = 0xff1d;
      *(undefined1 *)((int)pvVar6 + 0x36) = 0;
      *(undefined1 *)((int)pvVar6 + 0x37) = 0;
      *(undefined1 *)((int)pvVar6 + 0x38) = 0;
      *(undefined1 *)((int)pvVar6 + 0x39) = 0;
      puVar8 = (undefined *)((int)pvVar6 + 0x50);
    } while (puVar8 != (undefined *)0x4ff48eee);
    DAT_ram_4ff4a01c = 0;
    DAT_ram_4ff4a02c = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
    FUN_ram_480ecf52(&DAT_ram_4ff60e20);
  }
  iVar3 = DAT_ram_4ff6ded8;
  iVar4 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
  iVar9 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
  pcStack_40 = "{\"ok\":true}";
  uStack_44 = 200;
  aiStack_3c[0] = 0xb;
  cVar1 = *(char *)(iVar4 * 0x1d40 + iVar9 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    puVar2 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
    iVar5 = 0xb;
    if (((code *)*puVar2 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
      *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
      (*(code *)*puVar2)(&uStack_44,&pcStack_40,aiStack_3c);
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      iVar5 = aiStack_3c[0];
      if (aiStack_3c[0] == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar7 = iVar9 + iVar4;
    *(int *)(iVar7 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar7 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar9 + iVar4 + 0x1c,7);
      }
    }
    else {
      if (aiStack_3c[0] != 0) {
        FUN_ram_4ff45158(iVar5,pcStack_40,aiStack_3c[0]);
        iVar5 = *(int *)(iVar7 + 0x1cdc);
      }
      iVar4 = *(int *)(iVar3 + 0x4c) + *(int *)(iVar3 + 0x40) * 0x1d40;
      if ((*(char *)(iVar4 + 0x44c) != '\0') && (*(char *)(iVar4 + 0x44c) != '\x06')) {
        *(int *)(iVar4 + 0x1ce0) = iVar5;
        *(int *)(iVar4 + 0x1ce4) = aiStack_3c[0];
        *(undefined4 *)(iVar4 + 0x1ce8) = 0;
        FUN_ram_48066484(iVar3,uStack_44,"application/json",iVar4,&LAB_ram_4802d3f2);
      }
    }
  }
  return;
}


