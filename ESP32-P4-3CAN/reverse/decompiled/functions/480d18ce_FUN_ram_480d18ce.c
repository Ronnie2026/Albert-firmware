/* Firmware entry: 0x480d18ce */

int FUN_ram_480d18ce(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iStack_ec4;
  undefined1 auStack_ec0 [1204];
  undefined1 auStack_a0c [1204];
  code *local_558;
  undefined4 uStack_554;
  undefined1 uStack_550;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    return 0;
  }
  iVar1 = FUN_ram_48070f54(param_2);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 3) == '\0') {
      bVar4 = 0;
      iVar1 = 1;
    }
    else {
      bVar4 = *(byte *)(param_1 + 1) ^ 1;
      iVar1 = param_1[2] + 1;
    }
    memset(auStack_ec0,0,0x4b3);
    memset(auStack_a0c,0,0x4b3);
    iVar2 = FUN_ram_480713be(param_2,iVar1,auStack_ec0);
    if ((iVar2 != 0) && (DAT_ram_4ff47e6c != '\0')) {
      uStack_554 = 0;
      uStack_550 = 0;
      local_558 = FUN_ram_48025b94;
      puVar5 = (undefined1 *)*param_1;
      FUN_ram_4807df16();
      iVar2 = FUN_ram_48159fd2("p4_data","fsd_records4",1,&iStack_ec4);
      if (iVar2 == 0) {
        if (bVar4 == 0) {
          pcVar3 = "slot0";
        }
        else {
          pcVar3 = "slot1";
        }
        iVar2 = FUN_ram_4815a218(iStack_ec4,pcVar3,auStack_ec0,0x4b3);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4815a1c4(iStack_ec4);
          FUN_ram_4815a050(iStack_ec4);
          if (iVar2 == 0) {
            *(char **)(puVar5 + 4) = "fsd_records4";
            puVar5[8] = 1;
            *puVar5 = 1;
            FUN_ram_4807e2fa(&local_558);
            iVar2 = FUN_ram_4808eff4(*param_1,bVar4,auStack_a0c,0x4b3);
            if (iVar2 == 0) {
              return 0;
            }
            memset(&local_558,0,0x528);
            uStack_554 = 1;
            iStack_ec4 = 0;
            iVar2 = FUN_ram_4ff4511a(auStack_ec0,auStack_a0c,0x4b3);
            if (iVar2 != 0) {
              return 0;
            }
            iVar2 = FUN_ram_48071b5e(auStack_a0c,0x4b3,&local_558,&iStack_ec4);
            if (iVar2 == 0) {
              return 0;
            }
            if (iStack_ec4 != iVar1) {
              return 0;
            }
            *(byte *)(param_1 + 1) = bVar4;
            param_1[2] = iVar1;
            *(undefined2 *)(param_1 + 3) = 1;
            *(undefined1 *)((int)param_1 + 0xf) = 2;
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return iVar2;
          }
        }
        else {
          FUN_ram_4815a050(iStack_ec4);
        }
      }
      FUN_ram_4807e2fa(&local_558);
    }
  }
  return 0;
}


