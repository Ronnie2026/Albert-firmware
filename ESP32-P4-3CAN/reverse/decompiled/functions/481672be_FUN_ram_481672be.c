/* Firmware entry: 0x481672be */

undefined4 FUN_ram_481672be(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_14 = param_1;
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Client has not been initialized\n",uVar2,
                     "HTTP_CLIENT");
    return 0x103;
  }
  iVar1 = FUN_ram_48166da6();
  iVar3 = iStack_14;
  if (iVar1 == 0) {
    if (*(uint *)(iStack_14 + 0x80) < 2) {
      uVar2 = FUN_ram_48193216(*(undefined4 *)(iStack_14 + 0x18),*(undefined4 *)(iStack_14 + 0x4c));
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
      if (*(int *)(iStack_14 + 0x1c) == 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: No transport found\n",uVar2,"HTTP_CLIENT");
        uVar2 = 0x7005;
      }
      else {
        if (*(char *)(iStack_14 + 0xc4) == '\0') {
          iVar3 = FUN_ram_481932f8();
          if (-1 < iVar3) {
LAB_ram_48167350:
            *(undefined4 *)(iStack_14 + 0x80) = 2;
            if (*(code **)(iStack_14 + 0x84) != (code *)0x0) {
              *(undefined4 *)(iStack_14 + 0xa0) = 0;
              *(undefined4 *)(iStack_14 + 0xa4) = 0;
              *(undefined4 *)(iStack_14 + 0xa8) = *(undefined4 *)(iStack_14 + 0x28);
              *(undefined4 *)(iStack_14 + 0x98) = 1;
              (**(code **)(iStack_14 + 0x84))(iStack_14 + 0x98);
            }
            FUN_ram_481667a6(1,&iStack_14,4);
            return 0;
          }
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Connection failed, sock < 0\n",uVar2,
                           "HTTP_CLIENT");
        }
        else {
          iVar3 = FUN_ram_48193304(*(int *)(iStack_14 + 0x1c),*(undefined4 *)(iStack_14 + 0x50),
                                   *(undefined4 *)(iStack_14 + 0x54),
                                   *(undefined4 *)(iStack_14 + 0x88));
          if (iVar3 != -1) {
            if (iVar3 == 0) {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return 0x7006;
            }
            goto LAB_ram_48167350;
          }
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Connection failed\n",uVar2,"HTTP_CLIENT");
          iVar3 = strcasecmp(*(char **)(iStack_14 + 0x4c),"http");
          if (iVar3 == 0) {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                             "E (%lu) %s: Asynchronous mode doesn\'t work for HTTP based connection\n"
                             ,uVar2,"HTTP_CLIENT");
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0x102;
          }
        }
        uVar2 = 0x7002;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Failed to initialize request data\n",uVar2,
                     "HTTP_CLIENT");
    uVar2 = 0xffffffff;
    FUN_ram_4816725c(iStack_14);
  }
  return uVar2;
}


