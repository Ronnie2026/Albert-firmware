/* Firmware entry: 0x48168200 */

int FUN_ram_48168200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int aiStack_34 [4];
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -1;
  }
  aiStack_34[0] = param_1;
  if (*(char *)(param_1 + 0xbc) != '\0') {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (0 < iVar1) {
      iVar6 = *(int *)(param_1 + 0xb4);
      if (2 < *(uint *)(param_1 + 0x80)) {
        iVar5 = *(int *)(*(int **)(param_1 + 0x20))[1];
        iVar3 = 0;
        do {
          iVar2 = FUN_ram_4819331c(*(undefined4 *)(param_1 + 0x1c),iVar3 + iVar6 + iVar5,iVar1,
                                   *(undefined4 *)(param_1 + 0x88));
          iVar1 = iVar1 - iVar2;
          if ((*(char *)(param_1 + 0xc4) != '\0') || (iVar2 < 1)) break;
          iVar2 = iVar3 + iVar2;
          iVar3 = iVar2;
        } while (0 < iVar1);
        if (-1 < iVar2) {
          iVar1 = *(int *)(aiStack_34[0] + 0xb8) - iVar2;
          *(int *)(aiStack_34[0] + 0xb4) = *(int *)(aiStack_34[0] + 0xb4) + iVar2;
          *(int *)(aiStack_34[0] + 0xb8) = iVar1;
          if ((*(char *)(aiStack_34[0] + 0xc4) != '\0') && (0 < iVar1)) {
            return 0x7003;
          }
          uVar4 = *(undefined4 *)(aiStack_34[0] + 0xc0);
          iVar1 = 0;
          goto LAB_ram_48168294;
        }
      }
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Error write request\n",uVar4,"HTTP_CLIENT");
      return 0x7003;
    }
    uVar4 = *(undefined4 *)(param_1 + 0xc0);
    iVar1 = 0;
    goto LAB_ram_48168294;
  }
  iVar1 = **(int **)(param_1 + 0x20);
  if (param_2 < 0) {
    uVar4 = 0;
    if (iVar1 != 0) {
      FUN_ram_4816901a(iVar1,"Transfer-Encoding","chunked");
      uVar4 = **(undefined4 **)(param_1 + 0x20);
    }
    FUN_ram_48168f64(uVar4,"Content-Length");
  }
  else {
    if ((*(int *)(param_1 + 0x6c) == 0) || (*(int *)(param_1 + 0x6c) - 4U < 2)) {
      FUN_ram_48168f64(iVar1,"Transfer-Encoding");
      if (param_2 == 0) {
        FUN_ram_48168f64(**(undefined4 **)(param_1 + 0x20),"Content-Length");
        goto LAB_ram_4816838a;
      }
    }
    else {
      FUN_ram_48168f64(iVar1,"Transfer-Encoding");
    }
    FUN_ram_4816911a(**(undefined4 **)(param_1 + 0x20),"Content-Length",&DAT_ram_481d3728,param_2);
  }
LAB_ram_4816838a:
  iVar1 = FUN_ram_4819ad74(**(undefined4 **)(*(int *)(param_1 + 0x20) + 4),
                           *(undefined4 *)(param_1 + 0x90),"%s %s",
                           (&PTR_DAT_ram_481c87b8_ram_48238288)[*(int *)(param_1 + 0x6c)],
                           *(undefined4 *)(param_1 + 0x60));
  iVar6 = *(int *)(param_1 + 0x90);
  if (iVar1 < iVar6) {
    if (*(int *)(param_1 + 100) != 0) {
      iVar3 = FUN_ram_4819ad74(**(int **)(*(int *)(param_1 + 0x20) + 4) + iVar1,iVar6 - iVar1,
                               &DAT_ram_481dd720);
      iVar6 = *(int *)(param_1 + 0x90);
      iVar1 = iVar1 + iVar3;
      if (iVar6 <= iVar1) goto LAB_ram_48168502;
    }
    iVar6 = FUN_ram_4819ad74(**(int **)(*(int *)(param_1 + 0x20) + 4) + iVar1,iVar6 - iVar1,
                             " %s\r\n","HTTP/1.1");
    iVar1 = iVar1 + iVar6;
    if (iVar1 < *(int *)(param_1 + 0x90)) {
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar4 = 0;
      *(undefined4 *)(aiStack_34[0] + 0xc0) = 0;
      *(undefined4 *)(aiStack_34[0] + 0xb4) = 0;
      *(undefined4 *)(aiStack_34[0] + 0xb8) = 0;
      *(undefined1 *)(aiStack_34[0] + 0xbc) = 1;
LAB_ram_48168294:
      aiStack_24[0] = *(int *)(aiStack_34[0] + 0x90) - iVar1;
      while( true ) {
        iVar6 = aiStack_34[0];
        iVar3 = FUN_ram_481691ac(**(undefined4 **)(aiStack_34[0] + 0x20),uVar4,
                                 *(int *)(*(undefined4 **)(aiStack_34[0] + 0x20))[1] + iVar1,
                                 aiStack_24);
        *(int *)(iVar6 + 0xc0) = iVar3;
        if ((iVar3 == 0) || (aiStack_24[0] < 1)) break;
        if (iVar1 != 0) {
          aiStack_24[0] = aiStack_24[0] + iVar1;
        }
        *(undefined1 *)(aiStack_24[0] + **(int **)(*(int *)(aiStack_34[0] + 0x20) + 4)) = 0;
        *(undefined4 *)(aiStack_34[0] + 0xb4) = 0;
        *(int *)(aiStack_34[0] + 0xb8) = aiStack_24[0];
        if (0 < aiStack_24[0]) {
          iVar6 = 0;
          iVar1 = aiStack_24[0];
          do {
            iVar6 = FUN_ram_4819331c(*(undefined4 *)(aiStack_34[0] + 0x1c),
                                     iVar6 + **(int **)(*(int *)(aiStack_34[0] + 0x20) + 4),iVar1,
                                     *(undefined4 *)(aiStack_34[0] + 0x88));
            if (iVar6 < 1) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Error write request\n",uVar4,
                               "HTTP_CLIENT");
              FUN_ram_4816725c(aiStack_34[0]);
              return 0x7003;
            }
            iVar1 = *(int *)(aiStack_34[0] + 0xb8) - iVar6;
            iVar6 = iVar6 + *(int *)(aiStack_34[0] + 0xb4);
            *(int *)(aiStack_34[0] + 0xb8) = iVar1;
            *(int *)(aiStack_34[0] + 0xb4) = iVar6;
          } while (0 < iVar1);
        }
        aiStack_24[0] = *(int *)(aiStack_34[0] + 0x90);
        uVar4 = *(undefined4 *)(aiStack_34[0] + 0xc0);
        iVar1 = 0;
      }
      *(undefined4 *)(aiStack_34[0] + 0xb4) = 0;
      *(undefined4 *)(aiStack_34[0] + 0xb8) = *(undefined4 *)(aiStack_34[0] + 0x44);
      *(undefined4 *)(aiStack_34[0] + 0x80) = 3;
      if (*(code **)(aiStack_34[0] + 0x84) != (code *)0x0) {
        *(undefined4 *)(aiStack_34[0] + 0xa0) = 0;
        *(undefined4 *)(aiStack_34[0] + 0xa4) = 0;
        *(undefined4 *)(aiStack_34[0] + 0xa8) = *(undefined4 *)(aiStack_34[0] + 0x28);
        *(undefined4 *)(aiStack_34[0] + 0x98) = 2;
        (**(code **)(aiStack_34[0] + 0x84))(aiStack_34[0] + 0x98);
      }
      FUN_ram_481667a6(2,aiStack_34,4);
      return 0;
    }
  }
LAB_ram_48168502:
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Out of buffer\n",uVar4,"HTTP_CLIENT");
  return -1;
}


