/* Firmware entry: 0x480ffd82 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_ota_start_480ffd82(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_48;
  char *pcStack_44;
  int aiStack_40 [4];
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48035faa();
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  if (iVar3 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x193,"application/json","{\"ok\":false,\"error\":\"token\"}"
                     ,0x1c);
    return;
  }
  if (DAT_ram_4ff5c5c0 == '\0') {
    fence();
    fence();
    if ((((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff6dc70 == 0)) &&
        ((DAT_ram_4ff6dc78 == 0 || (fence(), *(char *)(DAT_ram_4ff6dc78 + 0x3ffa) == '\0')))) &&
       ((((*(char *)(DAT_ram_4ff6dc74 + 0x221) == '\0' &&
          (*(char *)(DAT_ram_4ff6dc74 + 0x222) == '\0')) &&
         (*(char *)(DAT_ram_4ff6dc74 + 0x224) == '\0')) && (DAT_ram_4ff5c548 != '\x02')))) {
      if (DAT_ram_4ff6de6d == '\0') {
        pcVar6 = "{\"ok\":false,\"error\":\"pending_boot_verification\"}";
        uVar5 = 0x199;
      }
      else {
        fence();
        fence();
        if (DAT_ram_4ff6df34 != '\0') {
          fence();
          fence();
          if (((DAT_ram_4ff6df38 != '\0') && (DAT_ram_4ff6df2c != (int *)0x0)) &&
             (iVar4 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))(), iVar4 != 0)) {
            if (DAT_ram_4ff5c5f8 == '\0') {
              if (DAT_ram_4ff5c5cc == -1) {
                pcVar6 = "{\"ok\":false,\"error\":\"session_generation_exhausted\"}";
                uVar5 = 0x1f7;
              }
              else {
                FUN_ram_4802e5c0();
                DAT_ram_4ff5c5cc = DAT_ram_4ff5c5cc + 1;
                FUN_ram_4802ad46(&DAT_ram_4ff5c55c,&DAT_ram_481df390);
                FUN_ram_4802ad46(&DAT_ram_4ff5c56c,&DAT_ram_481df390);
                DAT_ram_4ff5c5a8 = "preparing";
                DAT_ram_4ff5c5ac = &DAT_ram_481df390;
                DAT_ram_4ff5c57c = 0;
                DAT_ram_4ff5c588 = 0;
                DAT_ram_4ff5c584 = 0;
                DAT_ram_4ff5c580 = 0;
                DAT_ram_4ff5c5a4 = 0;
                DAT_ram_4ff5c5b0 = FUN_ram_48025ba6();
                DAT_ram_4ff5c548 = 0;
                DAT_ram_4ff5c5cb = 0;
                DAT_ram_4ff5c5d4 = 0;
                DAT_ram_4ff5c5e4 = 0;
                DAT_ram_4ff5c5e8 = 0;
                DAT_ram_4ff5c5c0 = '\x01';
                DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
                iVar4 = FUN_ram_480fe83a(3);
                pcVar6 = DAT_ram_4ff5c5a8;
                if (iVar4 == 0) {
                  DAT_ram_4ff5c5a8 = "failed";
                  DAT_ram_4ff5c5ac = pcVar6;
                  DAT_ram_4ff5c548 = 4;
                  FUN_ram_4802ad46(&DAT_ram_4ff5c55c,"can_quiesce");
                  if (DAT_ram_4ff5c5c0 != '\0') {
                    FUN_ram_480fed16(1);
                  }
                  FUN_ram_4802a8a8(aiStack_40,"{\"ok\":false,\"error\":\"");
                  FUN_ram_4802f152(&iStack_30,&DAT_ram_4ff5c55c);
                  FUN_ram_4802ae48(aiStack_40,&iStack_30);
                  FUN_ram_4802a59e(&iStack_30);
                  FUN_ram_4802af2c(aiStack_40,"\"}");
                  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x1f7,"application/json",aiStack_40);
                  FUN_ram_4802a59e(aiStack_40);
                  return;
                }
                iVar4 = FUN_ram_480f24fc();
                if (iVar4 != 0) {
                  DAT_ram_4ff5c5a8 = "ready";
                  DAT_ram_4ff5c548 = 1;
                  FUN_ram_4802a8a8(aiStack_40,"{\"ok\":true,\"token\":\"");
                  FUN_ram_4802a8ec(&iStack_30,aiStack_40);
                  uVar5 = FUN_ram_4802afda(&iStack_30,&DAT_ram_4ff5c54c);
                  uVar5 = FUN_ram_4802b022(uVar5,"\"}");
                  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",uVar5);
                  FUN_ram_4802a59e(&iStack_30);
                  FUN_ram_4802a59e(aiStack_40);
                  return;
                }
                DAT_ram_4ff5c5a8 = "failed";
                DAT_ram_4ff5c5ac = "persistence";
                DAT_ram_4ff5c548 = '\x04';
                FUN_ram_4802ad46(&DAT_ram_4ff5c55c,"persistence_flush");
                if ((DAT_ram_4ff5c5c0 == '\0') || (iVar4 = FUN_ram_480fed16(1), iVar4 == 0)) {
                  pcVar6 = "{\"ok\":false,\"error\":\"can_restore\"}";
                  uVar5 = 0x1f7;
                }
                else {
                  pcVar6 = "{\"ok\":false,\"error\":\"persistence_flush\"}";
                  uVar5 = 500;
                }
              }
            }
            else {
              pcVar6 = "{\"ok\":false,\"error\":\"wifi_transition\"}";
              uVar5 = 0x199;
            }
            goto LAB_ram_481000c4;
          }
        }
        pcVar6 = "{\"ok\":false,\"error\":\"can_not_ready\"}";
        uVar5 = 0x1f7;
      }
LAB_ram_481000c4:
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar5,"application/json",pcVar6);
      return;
    }
  }
  pcStack_44 = "{\"ok\":false,\"error\":\"ota_busy\"}";
  uStack_48 = 0x199;
  aiStack_40[0] = 0x1f;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar3 = 0x1f;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_48,&pcStack_44,aiStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar3 = aiStack_40[0];
      if (aiStack_40[0] == 0) {
        iVar3 = 1;
      }
    }
    iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
    iVar7 = iVar2 + iVar4 * 0x1d40;
    *(int *)(iVar7 + 0x1cdc) = iVar3;
    if (iVar3 == 0) {
      if (*(char *)(iVar7 + 0x44c) == '\0') {
        return;
      }
      FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
    }
    else {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar3,pcStack_44,aiStack_40[0]);
        iVar3 = *(int *)(iVar7 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_30 + 0x44c) == '\0') || (*(char *)(iStack_30 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iStack_30 + 0x1ce0) = iVar3;
      *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
      *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
      puStack_2c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_48,"application/json",iStack_30,&LAB_ram_4802d3f2);
    }
  }
  return;
}


